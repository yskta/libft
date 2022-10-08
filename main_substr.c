#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main()
{
    char s1[] = "substr function Implementation";
    char s2[] = "substr function Implementation";
    unsigned int start = 7;
    size_t len = 12;

    char* dest1 = ft_substr(s1, start, len);
    char* dest2 = substr(s2, start, len);
    printf("%s\n", dest1);
    printf("%s\n", dest2);

    return 0;
}