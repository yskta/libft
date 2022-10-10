/*
substr(string $string, int $offset, ?int $length = null): string
文字列 string の、offset で指定された位置から length バイト分の文字列を返します。

#1. 文字列（ *s ）
#2. 開始インデックス（ start ）
#3. 参照する文字の最大長（len ）
start>=ft_strlen(s)の場合は空の文字列を返す。
len == 0のときも空の文字列を返す。
lenが長すぎてsの終わりを超える場合は、sの最後まで抽出した文字列を返す。
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

//今回startはunsignedなので0以上。//
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char 	*str;
	size_t	s_len;
	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	//lenが長すぎてsの終わりを超える場合は、sの最後まで抽出した文字列を返す。
	if (start + len > s_len)
		len = s_len - start;
	//スタート位置がsの終わり以降 or len = 0の場合は空文字列を返す。
	if (start >= s_len || len == 0)
		return (ft_strdup(""));
	str = malloc (sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}