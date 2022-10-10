/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:22:29 by yokitaga          #+#    #+#             */
/*   Updated: 2022/10/10 16:22:30 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
    size_t  i;
    unsigned char *str1;
    unsigned char *str2;
    
    if (n == 0)
		return (0);
    i = 0;
    str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] != '\0' && str2[i] != '\0' && i < n)
	{
		if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
		i++;
	}
    return (0);
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