/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:26:22 by yokitaga          #+#    #+#             */
/*   Updated: 2022/10/11 16:31:15 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*文字列の先頭に、 半角スペースやtab や Enterの改行文字の空白文字並びがある場合、それら無視しする繰り返しの処理します。*/
//#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

int	ft_isspace(int c);
int	ft_isdigit(int c);

int	ft_isspace(int c)
{
	if ((9 <= c && c <= 13) || c == 32)
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

int	ft_atoi(const char *str)
{
	size_t	n;
	int		flag;

	n = 0;
	flag = 0;
	while (ft_isspace(*str) == 1)
		str++;
	if (*str == '-')
	{
		flag = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str) == 1)
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	if (flag == 1)
		n *= -1;
	return ((int)n);
}

/*
int main(void)
{
    printf("result of ft_atoi\n");
    char nptr1[] = "1234";
    char nptr2[] = "   1234abc";
    printf("nptr1：%d\n", ft_atoi(nptr1));
    printf("nptr2：%d\n", ft_atoi(nptr2));
    printf("====================\n");
    printf("result of atoi\n");
    printf("nptr1：%d\n", atoi(nptr1));
    printf("nptr2：%d\n", atoi(nptr2));
    return 0;
}*/