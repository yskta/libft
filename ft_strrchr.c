/*
文字列中の文字の位置を特定する
char *strrchr(const char *s, int c);
strrchr() 関数は、文字列 s 中に最後に文字 c が現れた位置へのポインターを返す。
strchrのreverse version
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

char	*ft_strrchr(const char *s, int c)
{
	char *result;
	char	ch;
	int		len;

	result = NULL;
	ch = (unsigned char)c;
	len = ft_strlen(s);

	if (ch == '\0')
		return ((char *)(&s[len]));
	while (--len >= 0)
	{
		if (s[len] == ch)
			return ((char *)(&s[len]));
	}
	return (NULL);
}