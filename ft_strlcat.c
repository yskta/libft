/*
ポインタsrcの指すアドレスから最大でsize - strlen(dst) - 1バイト文字列をdestの末尾に追記し、NULL文字で終わるようにする。
*/

#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t i;
    
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	src_size;
	size_t	i;

	dest_size = ft_strlen((const char *)dest);
	src_size = ft_strlen(src);
	i = 0;

	if (size <= dest_size)
		return (size + src_size);
	while (src[i] != '\0' && size - 1 > dest_size + i)
	{
		dest[dest_size +i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}