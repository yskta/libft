#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("result of ft_itoa\n");
    int n1 = 1234;
    int n2 = 2147483647;
    int n3 = -2147483648;
    printf("n1：%s\n", ft_itoa(n1));
    printf("n2：%s\n", ft_itoa(n2));
    printf("n3：%s\n", ft_itoa(n3));
    return 0;
}