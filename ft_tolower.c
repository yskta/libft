/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:23:00 by yokitaga          #+#    #+#             */
/*   Updated: 2022/10/11 16:22:53 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int ft_tolower(int c)
{
    if  (65 <= c && c <= 90)
        return (c + 32);
    else
        return (c);
}
/*
int main(void)
{
    printf("result of ft_tolower\n");
    int a;
    a = ft_tolower('A');
    printf("Aを小文字に変換→%c\n",a);
    printf("====================\n");
    printf("result of tolower\n");
    int b;
    b = tolower('A');
    printf("Aを小文字に変換→%c\n",b);
    return (0);
}
*/