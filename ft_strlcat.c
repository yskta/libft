/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:21:56 by yokitaga          #+#    #+#             */
/*   Updated: 2022/10/10 16:21:57 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
ポインタsrcの指すアドレスから最大でsize - strlen(dst) - 1バイト文字列をdestの末尾に追記し、NULL文字で終わるようにする。
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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen((const char *)dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
    ft_strlcpy(dest + dest_len, src, size - dest_len);
	return (dest_len + src_len);
}

/*
int main(void)
{
    printf("result of ft_strlcat\n");
    char buf1[] = "ABCDDEFG";
    char buf2[] = "123456789";
    printf("%lu\n", ft_strlcat(buf1, buf2, 5));
    printf("====================\n");
    printf("result of strlcat\n");
    char str1[] = "ABCDDEFG";
    char str2[] = "123456789";
    printf("%lu\n", strlcat(str1, str2, 5));
    return (0);
}
*/