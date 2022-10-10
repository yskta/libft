//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int ft_tolower(int c)
{
    if (65 <= c && c <= 90)
        return (c + 32);
    else
        return (c);
}

/*
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
*/