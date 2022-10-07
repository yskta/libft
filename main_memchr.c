#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("result of ft_memchr\n");

    char buf1[] = "ABCD5EFGH";
    char *ch1;

    ch1 = (char*)ft_memchr(buf1,'5', sizeof(buf1));

    if(ch1 != NULL)
        printf("検索文字から表示→%s\n", ch1);
    else
        printf("検索文字が見つかりませんでした。");
    printf("====================\n");
    printf("result of memchr\n");
    char buf2[] = "ABCD5EFGH";
    char *ch2;

    ch2 = (char*)memchr(buf2,'5', sizeof(buf2));

    if(ch2 != NULL)
        printf("検索文字から表示→%s\n", ch2);
    else
        printf("検索文字が見つかりませんでした。");
    return 0;
}
