/*
メモリー領域を比較する 
int memcmp(const void *s1, const void *s2, size_t n);
memcmp() 関数は、メモリー領域 s1 とs2 の最初の n バイトを比較する (各バイトは unsigned char として解釈される)。  
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		else
			i++;
	}
	return (0);
}