/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:19:24 by yokitaga          #+#    #+#             */
/*   Updated: 2022/10/10 16:19:25 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int ft_isdigit(int c)
{
	if ( 48 <= c && c <= 57)
		return (1);
	else
		return (0);
}

/*
int main(void)
{
    printf("＜result of ft_isdigit＞\n");
    printf("1：%d\n", ft_isdigit('1'));
    printf("アスキーコードの1：%d\n", ft_isdigit(1));
    printf("a：%d\n", ft_isdigit('a'));
    printf("====================\n");
    printf("＜result of isdigit＞\n");
    printf("1：%d\n", isdigit('1'));
    printf("アスキーコードの1：%d\n", isdigit(1));
    printf("a：%d\n", isdigit('a'));
    return (0);
}
*/