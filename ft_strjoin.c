/*ft_strjoin
Prototype char *ft_strjoin(char const *s1, char const *s2);
Turn in files -
Parameters s1: The prefix string. 接頭辞の文字列。
s2: The suffix string.接尾辞の文字列
Return value The new string.
NULL if the allocation fails.
*/
#include <stdio.h>
#include <string.h>
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

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *p;
    size_t  len_s1;
    size_t  len_s2;

    len_s1 = 0;
    len_s2 = 0;
    if (s1 == NULL && s2 == NULL)
        return(NULL);
    if (s1 != NULL)
        len_s1 = ft_strlen(s1);
    if (s2 != NULL)
        len_s2 = ft_strlen(s2);
    p = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1)); /*最後にヌル終端を*/
    if (p == NULL)
        return (NULL);
    ft_strlcpy(p, s1, len_s1 + 1);
	ft_strlcpy(p + len_s1, s2, len_s2 + 1);
    return (p);
}

int main(void)
{
    printf("<result of ft_strjoin>\n");
    char s1[] = "ABCDDEFG";
    char s2[] = "123456789";
    printf("%s\n", ft_strjoin(s1, s2));
    return (0);
}