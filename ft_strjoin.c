#include <stdlib.h>
intft_strlen(char *str);
char*ft_strcpy(char *dest, char *src);
intcntword(int size, char **strs);
voidarray_init(char *str);
char*ft_strjoin(int size, char **strs, char *sep);

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int cntword(int size, char **strs)
{
    int i;
    int wordcount;
    
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

void array_init(char *str)
{
    while (*str != '\0')
    {
        *str = 0;
        str++;
    }
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *str;
    int i;
    int j;
    
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