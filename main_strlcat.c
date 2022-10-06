#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    printf("result of ft_strlcat\n");
    char buf1[] = "ABCDDEFG";
    char buf2[] = "123456789";
    printf("%lu\n", ft_strlcat(buf1, buf2, 5));
    printf("====================\n");
    printf("result of strlcat\n");
    char str1[] = "ABCDDEFG";
    char str2[] = "123456789";
    printf("%lu\n", strlcat(str1, str2, 5));
    return (0);
}