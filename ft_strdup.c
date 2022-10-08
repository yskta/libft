#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t i;
    
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char	*ft_strcpy(char *dest, const char *src)
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

char	*ft_strdup(const char *src)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (int)ft_strlen(src));
	if (dest == NULL)
		return (NULL);
	return (ft_strcpy(dest, src));
}

int main(void)
{
    printf("result of ft_strdup\n");
    char nptr1[] = "1234";
    char nptr2[] = "   1234abc";
    printf("nptr1：%s\n", ft_strdup(nptr1));
    printf("nptr2：%s\n", ft_strdup(nptr2));
    printf("====================\n");
    printf("result of strdup\n");
    printf("nptr1：%s\n", strdup(nptr1));
    printf("nptr2：%s\n", strdup(nptr2));
    return 0;
}
