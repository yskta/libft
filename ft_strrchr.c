/*
文字列中の文字の位置を特定する
char *strrchr(const char *s, int c);
strrchr() 関数は、文字列 s 中に最後に文字 c が現れた位置へのポインターを返す。
*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	ch;

	ch = (unsigned char)c;
	len = ft_strlen((char *)s);
	if (ch == '\0')
		return ((char *)(&s[len]));
	while (--len >= 0)
	{
		if (s[len] == ch)
			return ((char *)(&s[len]));
	}
	return (NULL);
}