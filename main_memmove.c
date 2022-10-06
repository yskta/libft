#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    printf("result of ft_memmove\n");
    char buf1[] = "ABCDDEFG";
    char buf2[] = "123456789";
    ft_memmove(buf1, buf2, 3);
    printf("%s\n", buf1);

    printf("====================\n");
    printf("result of memmove\n");
    char str1[] = "ABCDDEFG";
    char str2[] = "123456789";
    memmove(str1,str2,3);
    printf("%s\n", str1);
    return (0);
}