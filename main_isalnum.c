#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("1：%d\n", ft_isalnum(1));
    printf("a：%d\n", ft_isalnum('a'));
    printf("!：%d\n", ft_isalnum('!'));
    return (0);
}