#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("result of ft_memcmp\n");

    char buf[] = "ABCD5EFGH";
    char buf2[] = "ABC123456";
    if(ft_memcmp(buf,buf2,3)==0)
        printf("先頭から3バイトは一致しています。\n");
    else
        printf("一致していません。");
    if(ft_memcmp(buf,buf2,5)==0)
        printf("先頭から5バイトは一致しています。");
    else
        printf("一致していません。比較結果：%d\n", ft_memcmp(buf,buf2,5));

    printf("====================\n");
    printf("result of memchr\n");
    if(memcmp(buf,buf2,3)==0)
        printf("先頭から3バイトは一致しています。\n");
    else
        printf("一致していません。");
    if(memcmp(buf,buf2,5)==0)
        printf("先頭から5バイトは一致しています。");
    else
        printf("一致していません。比較結果：%d\n", memcmp(buf,buf2,5));
}