/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:21:25 by yokitaga          #+#    #+#             */
/*   Updated: 2022/10/10 16:21:26 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
char *strchr(const char *s, int c);
文字列中の文字の位置を特定する
strchr() 関数は、文字列 s 中に最初に文字 c が現れた位置へのポインターを返す。
*/
//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    char ch;

    ch = (unsigned char)c;
    while (*s != '\0')
    {
        if (*s == ch)
            return ((char *)s);
        s++;
    }
    if (ch == '\0')
        return((char *)s);
    return (NULL);
}

/*
int main(void)
{
    printf("result of ft_strchr\n");
    char test1[20] = "abcdefghijk";
    char *p;
    p = ft_strchr(test1,'g');
    printf("検索文字が見つかった場所から表示→%s\n", p);
    printf("====================\n");
    printf("result of strchr\n");
    char test2[20] = "abcdefghijk";
    char *q;
    q = strchr(test2,'g');
    printf("検索文字が見つかった場所から表示→%s\n", q);
    return 0;
}
*/