/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:23:07 by yokitaga          #+#    #+#             */
/*   Updated: 2022/10/10 16:23:08 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int ft_toupper(int c)
{
    if (97 <= c && c <= 122)
        return (c - 32);
    else
        return (c);
}

/*
int main(void)
{
    printf("result of ft_toupper\n");
    int a;
    a = ft_toupper('a');
    printf("aを大文字に変換→%c\n",a);
    printf("====================\n");
    printf("result of toupper\n");
    int b;
    b = toupper('a');
    printf("aを大文字に変換→%c\n",b);
    return (0);
}
*/