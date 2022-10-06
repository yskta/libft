#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    printf("result of ft_strlcpy\n");
    char buf1[] = "ABCDDEFG";
    char buf2[] = "123456789";
    printf("%lu\n", ft_strlcpy(buf1, buf2, 5));
    printf("%s\n", buf1);
    printf("====================\n");
    printf("result of strlcpy\n");
    char str1[] = "ABCDDEFG";
    char str2[] = "123456789";
    printf("%lu\n", strlcpy(str1, str2, 5));
    printf("%s\n", str1);
    return (0);
}