/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:19:31 by yokitaga          #+#    #+#             */
/*   Updated: 2022/10/10 16:33:08 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int ft_isprint(int c)
{
    if (32 <= c&& c <= 126)
        return (1);
    else
        return (0);
}

/*
int main(void)
{
    printf("＜result of ft_isprint＞\n");
    printf("a：%d\n", ft_isprint('a'));
    printf("9：%d\n", ft_isprint('9'));
    printf("!：%d\n", ft_isprint('!'));
    printf("アスキーコードの0：%d\n", ft_isprint(0));
    printf("====================\n");
    printf("＜result of isprint＞\n");
    printf("a：%d\n", isprint('a'));
    printf("9：%d\n", isprint('9'));
    printf("!：%d\n", isprint('!'));
    printf("アスキーコードの0：%d\n", isprint(0));
    return (0);
}
*/