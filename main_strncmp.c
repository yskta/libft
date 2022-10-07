#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("result of ft_strncmp\n");

    char test1[10] = "abcdefgh";
    char test2[10] = "abcde123";

    if(ft_strncmp(test1,test2,5)==0)
    {
        printf("文字列は一致しています。");
        printf ("比較結果：%d\n", ft_strncmp(test1,test2,5));
    }
    else
    {
        printf("文字列は一致していません。");
        printf ("比較結果：%d\n", ft_strncmp(test1,test2,5));
    }
    if(ft_strncmp(test1,test2,7)==0)
    {
        printf("文字列は一致しています。");
        printf ("比較結果：%d\n", ft_strncmp(test1,test2,7));
    }
    else
    {
        printf("文字列は一致していません。");
        printf ("比較結果：%d\n", ft_strncmp(test1,test2,7));
    }
    printf("====================\n");
    printf("result of strncmp\n");

    if(strncmp(test1,test2,5)==0)
    {
        printf("文字列は一致しています。");
        printf ("比較結果：%d\n", strncmp(test1,test2,5));
    }
    else
    {
        printf("文字列は一致していません。");
        printf ("比較結果：%d\n", strncmp(test1,test2,5));
    }
    if(strncmp(test1,test2,7)==0)
    {
        printf("文字列は一致しています。");
        printf ("比較結果：%d\n", strncmp(test1,test2,7));
    }
    else
    {
        printf("文字列は一致していません。");
        printf ("比較結果：%d\n", strncmp(test1,test2,7));
    }
    return 0;
}
