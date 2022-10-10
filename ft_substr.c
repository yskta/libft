/*
substr(string $string, int $offset, ?int $length = null): string
文字列 string の、offset で指定された位置から length バイト分の文字列を返します。
length が指定され、かつ正である場合、 返される文字列は start (string の長さに依存します) から数えてlength文字数分となります。
length が指定され、かつ負である場合、 string の終端からその文字数分の文字が省略されます (start が負の場合は、 開始位置を算出したあとで)。 もし start が切り出し位置を超える場合、 FALSE が返されます。
length が指定され、かつ 0、NULL、もしくは FALSE であれば、空の文字が返されます。

length を省略した場合は、 start の位置から文字列の最後までの部分文字列を返します。
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start + len > s_len)
		len = s_len - start;
	if (start >= s_len || len == 0)
		return (ft_strdup(""));
	str = malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_memmove (str, s + start, len);
	str[len] = '\0';
	return (str);
}