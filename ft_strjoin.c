/*ft_strjoin
Prototype char *ft_strjoin(char const *s1, char const *s2);
Turn in files -
Parameters s1: The prefix string. 接頭辞の文字列。
s2: The suffix string.接尾辞の文字列
Return value The new string.
NULL if the allocation fails.
External functs. malloc
Description Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	cntword(int size, char **strs)
{
	int	i;
	int	wordcount;

	i = 1;
	wordcount = 0;
	while (i <= size)
	{
		wordcount += ft_strlen(*strs);
		strs++;
		i++;
	}
	return (wordcount);
}

void	array_init(char *str)
{
	while (*str != '\0')
	{
		*str = 0;
		str++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char) * 1));
	str = (char *)malloc(sizeof(char) * cntword(size, strs) \
		   	 + (size - 1) * ft_strlen(sep));
	if (str == NULL)
		return (NULL);
	array_init(str);
	while (j < size)
	{
		ft_strcpy(&str[i], strs[j]);
		i += ft_strlen(strs[j]);
		j++;
		if (j != size)
		{
			ft_strcpy(&str[i], sep);
			i += ft_strlen(sep);
		}
	}
	return (str);
}