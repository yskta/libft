/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:22:51 by yokitaga          #+#    #+#             */
/*   Updated: 2022/10/10 18:24:24 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#1. 文字列。
#2. トリミングする文字
*s1 から *set で指定された文字列を新たに作り返します。割り当てが失敗した場合はNULLを返す。
mallocで確保したメモリに文字列 *s1 の先頭と末尾から *set で指定された文字が削除されたコピーを返します。
s1="1234AAA22331122"
set="1234"
戻り値="AAA"
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
    size_t  start;
    size_t  size;

    start = 0;
    if (s1 == NULL)
        return (NULL);
    if (set == NULL)
        return (ft_strdup(s1));
    //start位置を探す。一文字ずつ
    while (ft_strchr(set, s1[start]) != NULL && s1[start] != '\0')
        start++;
    size = ft_strlen((char *)s1);
    //終わりの位置を探す
    while (ft_strchr(set, s1[size]) != NULL && s1[size] != 0)
        size--;
    //始まりの位置からsize-start文字数分の文字列を取り出す
    return (ft_substr(s1, start, size - start));
}