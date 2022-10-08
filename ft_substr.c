/*
substr(string $string, int $offset, ?int $length = null): string
文字列 string の、offset で指定された位置から length バイト分の文字列を返します。
length が指定され、かつ正である場合、 返される文字列は start (string の長さに依存します) から数えてlength文字数分となります。
length が指定され、かつ負である場合、 string の終端からその文字数分の文字が省略されます (start が負の場合は、 開始位置を算出したあとで)。 もし start が切り出し位置を超える場合、 FALSE が返されます。
length が指定され、かつ 0、NULL、もしくは FALSE であれば、空の文字が返されます。

length を省略した場合は、 start の位置から文字列の最後までの部分文字列を返します。
*/
/*テスト後でする*/

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
	/*lenはコピーする文字数*/
	char	*p;
	size_t	n;

	p = NULL;
	n = ft_strlen(s); /*nはコピー対象文字列nの文字数*/
	if (s == NULL) /*入力文字列。最低 1 文字以上を指定しなければなりません。*/
		return (NULL);
	if (start > n) /*startが文字列の文字数を超えた場合は空文字を返す*/
		len = 0;
	/*startが文字列の文字数を超えてない場合*/
	/*start>０, len>0*/
	if ((start > 0 && len > 0) && (start + len > n))
			len = n - start;
	/*start>０, len<0*/
	if ((start > 0 && len < 0) && (n + len > start))
			len = n + len - start;
	else if ((start > 0 && len < 0) && (n + len <= start))
			len = 0;
	/*start<０, len>0*/
	if ((start < 0 && len > 0) && (start * (-1) < len))
			len = start * (-1);
	/*start<０, len<0*/
	if ((start < 0 && len < 0) && (len < start))
			len = 0;
	if (start >= 0)
		ft_strlcpy(p, (s + start), len + 1);	
	if (start < 0)
		ft_strlcpy(p, (s + (unsigned int)n + start), len + 1);
	return (p);
}