/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:21:18 by yokitaga          #+#    #+#             */
/*   Updated: 2022/10/11 15:58:03 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
ファイルを複数に分割する  
INPUT を PREFIXaa, PREFIXab, ... という固定サイズのファイルに分割します。 デフォルトのサイズは 1000 行です。デフォルトの PREFIX は 'x' です。
ファイルの指定がない場合や FILE が - の場合, 標準入力から読み込みを行います。
長いオプションで必須となっている引数は短いオプションでも必須です。
# 戻り値　split("AAbbBBbbCC", "b")の場合{AA, BB, CC, NULL}
# mallocで割り当て、sをcで区切った文字列を返します。配列はNULLポインタで終了します。
分割後の文字列領域をmallocしている時にNULLが返った時は、それまで確保していた領域を全てfreeする。（機械判定は通るが人によっては減点対象）
*/
#include "libft.h"
size_t  ft_cnt(const char *s, char c);
char **ft_split_str(const char *s, char c, char **split_str, size_t split_cnt);

char **ft_split(char const *s, char c)
{
    char    **split_str;
    size_t  split_cnt;
    //単語数を数えてmallocでサイズ確保
    if (s == NULL)
        return (NULL);
    split_cnt = ft_cnt(s, c);
    split_str = (char **)malloc(sizeof(char *) * (split_cnt + 1));
    if (split_str == NULL)
        return (NULL);
    //splitして配列に入れる関数
    ft_split_str(s, c, split_str, split_cnt);
    return (split_str);
}

//単語数を数える
size_t  ft_cnt(const char *s, char c)
{
    size_t  count;
    size_t  i;

    count = 0;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
            count++;
        s++;
    }
    return(count);
}
//splitして配列に入れる関数
//
char **ft_split_str(const 
char *s, char c, char **split_str, size_t split_cnt)
{
    size_t  i;
    size_t  j;
    size_t  cnt;

    i = 0;
    cnt = 0;
    while (s[i] !=  '\0' && cnt < split_cnt)
    {
        if (s[i] != c)
        {
            j = i + 1;
            while(s[j] != '\0' && s[j] != c)
				j++;
            split_str[cnt] = ft_substr(s, i, j - i);
            split_str[cnt][j - i] = '\0';
            cnt++;
            i = j + 1;
        }
        else 
            i++;
    }
    split_str[split_cnt] = NULL; //NULLはポインタ
    return(split_str);
}

