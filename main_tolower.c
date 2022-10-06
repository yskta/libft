#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("result of ft_tolower\n");
    int a;
    a = ft_tolower('A');
    printf("Aを小文字に変換→%c\n",a);
    printf("====================\n");
    printf("result of tolower\n");
    int b;
    b = tolower('A');
    printf("Aを小文字に変換→%c\n",b);
    return (0);
}
