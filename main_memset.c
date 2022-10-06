#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    printf("result of ft_memset\n");
    char str1[] = "0123456789";
    memset(str1+2, '*', 5);
    printf("%s\n", str1);
    printf("====================\n");
    printf("result of memset\n");

    char str2[] = "0123456789";
    memset(str2+2, '*', 5);
    printf("%s\n", str2);
    return (0);
}