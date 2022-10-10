/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:20:48 by yokitaga          #+#    #+#             */
/*   Updated: 2022/10/10 16:20:49 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#include <stdio.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int main(void)
{
    printf("result of ft_putchar_fd\n");
    ft_putchar_fd('A', 1);
    return 0;
}
*/