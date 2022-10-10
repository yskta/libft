/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:22:03 by yokitaga          #+#    #+#             */
/*   Updated: 2022/10/10 16:22:04 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
size_t strlcpy (char *dst, const char *src, size_t n);
srcからdestに、最大n-1バイトを複写する。
destに複写された文字列の最後は、必ずNULL文字で終わる(サイズnが0で無い場合)。
nは、destで確保されたバッファーのサイズのsizeofを格納するのが一般的な用法である。
srcとdestが重なっていた場合の挙動は未定義である。
*/
//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t i;
    
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = ft_strlen(src);

	if (n != 0)
	{
		while (src[i] != '\0' && i < (n - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}	
	return (count);
}

/*
int main(void)
{
    printf("result of ft_strlcpy\n");
    char buf1[] = "ABCDDEFG";
    char buf2[] = "123456789";
    printf("%lu\n", ft_strlcpy(buf1, buf2, 5));
    printf("%s\n", buf1);
    printf("====================\n");
    printf("result of strlcpy\n");
    char str1[] = "ABCDDEFG";
    char str2[] = "123456789";
    printf("%lu\n", strlcpy(str1, str2, 5));
    printf("%s\n", str1);
    return (0);
}
*/