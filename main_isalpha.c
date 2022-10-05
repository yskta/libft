#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
    printf("result of ft_isalpha\n");
    printf("a：%d\n", ft_isalpha('a'));
    printf("1：%d\n", ft_isalpha('1'));
    printf("1234567：%d\n", ft_isalpha(1234567));
    printf("====================\n");
    printf("result of isalpha\n");
    printf("a：%d\n", isalpha('a'));
    printf("1：%d\n", isalpha('1'));
    printf("1234567：%d\n", isalpha(1234567));
    return (0);
}