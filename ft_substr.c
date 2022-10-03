/*
substr(string $string, int $offset, ?int $length = null): string
文字列 string の、offset で指定された位置から length バイト分の文字列を返します。

$rest = substr("abcdef", -1);    // "f" を返す
$rest = substr("abcdef", -2);    // "ef" を返す
$rest = substr("abcdef", -3, 1); // "d" を返す
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sstr;
	size_t	strlen;

	if (s == NULL)
		return (NULL);
	strlen = ft_strlen((char *)s);
	if (start > strlen)
		return (ft_strdup(""));
	if (strlen - start >= len)
		sstr = (char *)malloc((len + 1) * sizeof(char));
	else
		sstr = (char *)malloc((strlen - start + 1) * sizeof(char));
	if (sstr == NULL)
		return (NULL);
	ft_strlcpy(sstr, (s + start), (len + 1));
	return (sstr);
}