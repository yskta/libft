/*
strnstr() 関数は、検索された len 文字より少ない文字列 big の中で、ヌル文 字で終了する文字列 little が最初に出現する位置を探します。 
‘\0’ の後に現 れる文字は、検索されません。 strnstr() 関数は、 FreeBSD の特定の API なの で、移植に無関係なときだけ利用するようにしてください。
const char * s1：The string to be searched
const char * s2：The string to search for
size_t len：the maximum number of characters to search
<戻り値>
s2 が空の文字列のとき、 s1 を返し、 s2 が s1 がない場合は、NULL を返します。 
それ以外のときは、 最初に出現した little の最初の文字へのポインタを返します。

要はlenの数以内で完全一致s1の中にs2と完全一致する箇所があればその重なり始めの箇所をポインタで返す
*/
#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	c;

	if (s2[0] == '\0')
		return ((char *)s1);
	i = 0;
	while (s1[i] != '\0' && i < len)
	{
		c = 0;
		while ((s1[i + c] == s2[c]) && (i + c) < len)
		{
			if (s2[c + 1] == '\0')
				return ((char *)(&s1[i]));
			c++;
		}
		i++;
	}
	return (NULL);
}

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