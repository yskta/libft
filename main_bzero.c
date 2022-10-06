#include <stdio.h>
#include <strings.h>
#include "libft.h"

int main(void)
{
    printf("result of ft_bzero\n");
    char str1[] = "0123456789";
    ft_bzero(str1+2, 5);
    printf("%s\n", str1);
    printf("====================\n");
    printf("result of bzero\n");
    char str2[] = "0123456789";
    bzero(str2+2, 5);
    printf("%s\n", str2);
    return (0);
}