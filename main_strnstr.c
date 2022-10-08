#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("result of ft_strnstr\n");
    char test1[20] = "abcdefghijk";
    char test2[20] = "defgh";
    char *p;
    p = ft_strnstr(test1, test2, 10);
    printf("検索文字が見つかった場所から表示→%s\n", p);
    printf("====================\n");
    printf("result of strnstr\n");
    char test3[20] = "abcdefghijk";
    char test4[20] = "defgh";
    char *q;
    q = strnstr(test3, test4, 10);
    printf("検索文字が見つかった場所から表示→%s\n", q);
    return 0;
}
