/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:22:43 by yokitaga          #+#    #+#             */
/*   Updated: 2022/10/10 16:22:44 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
文字列中の文字の位置を特定する
char *strrchr(const char *s, int c);
strrchr() 関数は、文字列 s 中に最後に文字 c が現れた位置へのポインターを返す。
strchrのreverse version
*/
//#include <string.h>
//#include <stdio.h>
#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t i;
    
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	char *result;
	char	ch;
	int		len;

	result = NULL;
	ch = (unsigned char)c;
	len = ft_strlen(s);

	if (ch == '\0')
		return ((char *)(&s[len]));
	while (--len >= 0)
	{
		if (s[len] == ch)
			return ((char *)(&s[len]));
	}
	return (NULL);
}

/*
int main(void)
{
    printf("result of ft_strrchr\n");
    char test1[20] = "abcdefghijk";
    char *p;
    p = ft_strrchr(test1,'f');
    printf("検索文字が見つかった場所から表示→%s\n", p);
    printf("====================\n");
    printf("result of strrchr\n");
    char test2[20] = "abcdefghijk";
    char *q;
    q = strrchr(test2,'f');
    printf("検索文字が見つかった場所から表示→%s\n", q);
    return 0;
}
*/