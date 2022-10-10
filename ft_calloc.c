/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:17:23 by yokitaga          #+#    #+#             */
/*   Updated: 2022/10/10 16:17:26 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
size バイトのブロックを n個割り当てます。確保されたブロックは 0 クリアされます。→bzero関数使う
この関数を使うことにより、プログラムで予め配列などを使ってメモリを確保せずに、必要な場所で必要なだけメモリを確保することが出来ます。
【引数】
size_t size　：　確保したいメモリのバイトサイズ
　　　　　　　　　size_t は stdlib.h の中でtypedefされ、一般にunsignedです。
【戻り値】
成功時　：　確保したメモリブロックを指すポインタ　（void *についてはmalloc関数参照）
失敗時　：　NULL　（メモリ不足により指定サイズ分のメモリが確保できないとき）
*/

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    char *d;

    d = (char *)s;
    while (n--)
    {
        *d = c;
        d++;
    }
    return (s);
}

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, '\0', n);
}

void	*ft_calloc(size_t number, size_t size)
{
	void	*p;

	p = malloc(number * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, (number * size));
	return (p);
}