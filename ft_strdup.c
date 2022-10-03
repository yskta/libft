#include "libft.h"

int ft_strlen(char*str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

void *ft_memcpy(void *dest, const void *src, size_t n);
{
    size_t  i;
    unsigned char *destc;
    unsigned char *srcc;

    if (dest == NULL && src == NULL)
        return (NULL);
    i = 0;
    destc = (unsigned char *)dest;
    srcc = (unsigned char *)src;
    while (i < n)
    {
        destc[i] = srcc[i];
        i++;
    }
    return (dest);
}

char *ft_strdup(const char *s1)
{
	int		size;
	char	*ptr;

	size = ft_strlen((char *)s1);
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, size);
	ptr[size] = '\0';
	return (ptr);
}