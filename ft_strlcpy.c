/*
size_t strlcpy (char *dst, const char *src, size_t size);
strlcpy はC言語で文字列を安全にコピーするための関数である。ISO で規定された関数ではないが、BSD libc などに含まれている。
危険な使い方をしてしまいがちな関数 strcpy や strncpy の代替として開発された。
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	count;

	if (!dst || !src)
		return (0);
	i = 0;
	count = 0;
	while (src[count] != '\0')
		count++;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}	
	return (count);
}