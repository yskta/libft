/*
文字を探すためにメモリーをスキャンする  
void *memchr(const void *s, int c, size_t n);
memchr() 関数は、ポインター s が指し示すメモリー領域の先頭の n バイトから最初に登場する文字 c を探す。 
c と s が指し示すメモリー領域の各バイトは両方とも unsigned char と解釈される。
*/
//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*str;
	size_t			i;

	ch = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return ((void *)(&str[i]));
		i++;
	}
	return (NULL);
}

/*
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
*/