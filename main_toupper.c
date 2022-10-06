#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("result of ft_toupper\n");
    int a;
    a = ft_toupper('a');
    printf("aを大文字に変換→%c\n",a);
    printf("====================\n");
    printf("result of toupper\n");
    int b;
    b = toupper('a');
    printf("aを大文字に変換→%c\n",b);
    return (0);
}