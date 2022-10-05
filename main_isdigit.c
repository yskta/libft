#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
    printf("＜result of ft_isdigit＞\n");
    printf("1：%d\n", ft_isdigit('1'));
    printf("アスキーコードの1：%d\n", ft_isdigit(1));
    printf("a：%d\n", ft_isdigit('a'));
    printf("====================\n");
    printf("＜result of isdigit＞\n");
    printf("1：%d\n", isdigit('1'));
    printf("アスキーコードの1：%d\n", isdigit(1));
    printf("a：%d\n", isdigit('a'));
    return (0);
}