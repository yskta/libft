#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("result of ft_strchr\n");
    char test1[20] = "abcdefghijk";
    char *p;
    p = ft_strchr(test1,'g');
    printf("検索文字が見つかった場所から表示→%s\n", p);
    printf("====================\n");
    printf("result of strchr\n");
    char test2[20] = "abcdefghijk";
    char *q;
    q = strchr(test2,'g');
    printf("検索文字が見つかった場所から表示→%s\n", q);
    return 0;
}
