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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*udest;
	unsigned char	*usrc;
	size_t			i;

	if ((dest == NULL) && (src == NULL))
		return (NULL);
	udest = (unsigned char *)dest;
	usrc = (unsigned char *)src;
	i = 1;

// destはコピー先 srcはコピー元
	if (usrc < udest) //コピー先の先端部分が重なっている場合、最後からコピー
	{
		while (i <= n)
		{
			udest[n - i] = usrc[n - i];
			i++;
		}
		return (dest);
	}
	else //コピー先の最終部分が重なっている場合、最初からコピー→memcpyで良い
		ft_memcpy(dest, src, n);
	return (dest);
}

/*
int main(void)
{
    printf("result of ft_memmove\n");
    char buf1[] = "ABCDDEFG";
    char buf2[] = "123456789";
    ft_memmove(buf1, buf2, 3);
    printf("%s\n", buf1);

    printf("====================\n");
    printf("result of memmove\n");
    char str1[] = "ABCDDEFG";
    char str2[] = "123456789";
    memmove(str1,str2,3);
    printf("%s\n", str1);
    return (0);
}
*/

