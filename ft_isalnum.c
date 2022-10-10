/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:18:45 by yokitaga          #+#    #+#             */
/*   Updated: 2022/10/10 16:18:51 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int ft_isalpha(int c)
{
    if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
        return (1);
    else
        return (0);
}

int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	else
		return (0);
}

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) != 0) || (ft_isdigit(c) != 0))
		return (1);
	else
		return (0);
}

/*
int main(void)
{
    printf("＜result of ft_isalnum＞\n");
    printf("1：%d\n", ft_isalnum(1));
    printf("a：%d\n", ft_isalnum('a'));
    printf("!：%d\n", ft_isalnum('!'));
    printf("アスキーコードの1：%d\n", ft_isalnum(1));
    printf("====================\n");
    printf("＜result of isalnum＞\n");
    printf("1：%d\n", isalnum(1));
    printf("a：%d\n", isalnum('a'));
    printf("!：%d\n", isalnum('!'));
    printf("アスキーコードの1：%d\n", isalnum(1));
    return (0);
}
*/



