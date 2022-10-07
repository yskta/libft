#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("result of ft_strrchr\n");
    char test1[20] = "abcdefghijk";
    char *p;
    p = ft_strrchr(test1,'f');
    printf("検索文字が見つかった場所から表示→%s\n", p);
    printf("====================\n");
    printf("result of strchr\n");
    char test2[20] = "abcdefghijk";
    char *q;
    q = strrchr(test2,'f');
    printf("検索文字が見つかった場所から表示→%s\n", q);
    return 0;
}