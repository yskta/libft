/*
size_t strlcpy (char *dst, const char *src, size_t n);
srcからdestに、最大n-1バイトを複写する。
destに複写された文字列の最後は、必ずNULL文字で終わる(サイズnが0で無い場合)。
nは、destで確保されたバッファーのサイズのsizeofを格納するのが一般的な用法である。
srcとdestが重なっていた場合の挙動は未定義である。
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