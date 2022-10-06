#include <stdio.h>
#include <strings.h>
#include "libft.h"

int main(void)
{
    printf("result of ft_memcpy\n");
    char buf1[] = "ABCDDEFG";
    char buf2[] = "123456789";

    ft_memcpy(buf1, buf2, 3);
    printf("%s\n", buf1);
    printf("====================\n");
    printf("result of memcpy\n");
    
    char str1[] = "ABCDDEFG";
    char str2[] = "123456789";
    memcpy(str1,str2,3);
    printf("%s\n", str1);
    return (0);
}