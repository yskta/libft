#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("1：%d\n", ft_isdigit(1));
    printf("a：%d\n", ft_isdigit('a'));
    printf("5：%d\n", ft_isdigit(5));
    return (0);
}