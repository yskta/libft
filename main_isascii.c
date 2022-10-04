#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("a：%d\n", ft_isascii('a'));
    printf("9：%d\n", ft_isascii(9));
    printf("1234567：%d\n", ft_isascii(1234567));
    printf("!：%d\n", ft_isascii('!'));
    return (0);
}