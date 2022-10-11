/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:19:03 by yokitaga          #+#    #+#             */
/*   Updated: 2022/10/11 17:03:36 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    else
        return (0);
}
/*
int main(void)
{
    printf("result of ft_isalpha\n");
    printf("a：%d\n", ft_isalpha('a'));
    printf("アスキーコードの97(a)：%d\n", ft_isalpha(97));
    printf("1：%d\n", ft_isalpha('1'));
    printf("1234567：%d\n", ft_isalpha(1234567));
    printf("====================\n");
    printf("result of isalpha\n");
    printf("a：%d\n", isalpha('a'));
    printf("アスキーコードの97(a)：%d\n", isalpha(97));
    printf("1：%d\n", isalpha('1'));
    printf("1234567：%d\n", isalpha(1234567));
    return (0);
}
*/
