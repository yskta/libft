#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("a：%d\n", ft_isprint('a'));
    printf("9：%d\n", ft_isprint('9'));
    printf("1234567：%d\n", ft_isprint('1234567'));
    printf("!：%d\n", ft_isprint('!'));
    return (0);
}