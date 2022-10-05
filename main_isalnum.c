#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
    printf("＜result of ft_isalnum＞\n");
    printf("1：%d\n", ft_isalnum('1'));
    printf("a：%d\n", ft_isalnum('a'));
    printf("!：%d\n", ft_isalnum('!'));
    printf("アスキーコードの1：%d\n", ft_isalnum(1));
    printf("====================\n");
    printf("＜result of isalnum＞\n");
    printf("1：%d\n", isalnum(1));
    printf("a：%d\n", isalnum('a'));
    printf("!：%d\n", isalnum('!'));
    printf("アスキーコードの1：%d\n", isalnum(1));
    return (0);
}