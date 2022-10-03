/*
memmove - メモリー領域をコピーする  
#include <string.h>
void *memmove(void *dest, const void *src, size_t n);

memmove() は、メモリー領域 src の先頭 n バイトを メモリー領域 dest にコピーする。
コピー元とコピー先の 領域が重なっていてもよい。 
最初に src のバイトが src とも dest とも重ならない一時的な配列にコピーされてから、
一時的な配列から dest にバイトのコピーが行われたかのように、コピーが行われる。

memmove() は dest へのポインターを返す。  
*/

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n);
{
    size_t  i;
    unsigned char *destc;
    unsigned char *srcc;

    if (dest == NULL && src == NULL)
        return (NULL);
    i = 0;
    destc = (unsigned char *)dest;
    srcc = (unsigned char *)src;
    while (i < n)
    {
        destc[i] = srcc[i];
        i++;
    }
    return (dest);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*destc;
	unsigned char	*srcc;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	destc = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	i = 1;
	if (srcc < destc)
	{
		while (i <= len)
		{
			destc[len - i] = srcc[len - i];
			i++;
		}
	}
	else
		ft_memcpy(dstc, srcc, len);
	return (dest);
}