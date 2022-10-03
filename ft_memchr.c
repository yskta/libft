/*
文字を探すためにメモリーをスキャンする  
void *memchr(const void *s, int c, size_t n);
memchr() 関数は、ポインター s が指し示すメモリー領域の先頭の n バイトから最初に登場する文字 c を探す。 
c と s が指し示すメモリー領域の各バイトは両方とも unsigned char と解釈される。
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*str;
	size_t			i;

	ch = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return ((void *)(&str[i]));
		i++;
	}
	return (NULL);
}