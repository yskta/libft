/*
二つの文字列を比べる
int strncmp(const char *s1, const char *s2, size_t n);
strncmp() 関数は、s1 と s2 の最初の n バイトだけを比較する ことを除けば、strcmp()と同様である。  
*/
//#include <string.h>
//#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 && *s2) != '\0' && n > 0)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/*
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
*/