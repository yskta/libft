/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:20:20 by yokitaga          #+#    #+#             */
/*   Updated: 2022/10/10 16:20:20 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
memcpy - メモリー領域をコピーする。  
memcpy() はメモリー領域 src の先頭 n バイトを メモリー領域 dest にコピーする。コピー元の領域と コピー先の領域が重なってはならない。
重なっている場合は memmove(3) を使うこと。  
void *memcpy(void *dest, const void *src, size_t n);
memcpy() は dest へのポインターを返す。
*/
//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;
    unsigned char *udest;
    unsigned char *usrc;

    if (dest == NULL && src == NULL)
        return (NULL);
    i = 0;
    udest = (unsigned char *)dest;
    usrc = (unsigned char *)src;
    while (i < n)
    {
        udest[i] = usrc[i];
        i++;
    }
    return (dest);
}

/*
int main(void)
{
    printf("result of ft_memcpy\n");
    char buf1[] = "ABCDDEFG";
    char buf2[] = "123456789";

    ft_memcpy(buf1, buf2, 3);
    printf("%s\n", buf1);
    printf("====================\n");
    printf("result of memcpy\n");
    
    char str1[] = "ABCDDEFG";
    char str2[] = "123456789";
    memcpy(str1,str2,3);
    printf("%s\n", str1);
    return (0);
}
*/