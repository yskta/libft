#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("a：%d\n", ft_isalpha('a'));
    printf("1234567：%d\n", ft_isalpha(1234567));
    return (0);
}