/*
メモリー領域を比較する 
int memcmp(const void *s1, const void *s2, size_t n);
memcmp() 関数は、メモリー領域 s1 とs2 の最初の n バイトを比較する (各バイトは unsigned char として解釈される)。  
*/
//#include <string.h>
//#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		else
			i++;
	}
	return (0);
}

/*
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
*/