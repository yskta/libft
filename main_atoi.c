#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("result of ft_atoi\n");
    char nptr1[] = "1234";
    char nptr2[] = "   1234abc";
    printf("nptr1：%d\n", ft_atoi(nptr1));
    printf("nptr2：%d\n", ft_atoi(nptr2));
    printf("====================\n");
    printf("result of atoi\n");
    printf("nptr1：%d\n", atoi(nptr1));
    printf("nptr2：%d\n", atoi(nptr2));
    return 0;
}