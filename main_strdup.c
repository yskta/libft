#include <string.h>
#include <stdio.h>
#include "libft.h"

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