/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:21:12 by yokitaga          #+#    #+#             */
/*   Updated: 2022/10/10 16:21:12 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
void ft_putstr_fd(char *s, int fd);
s: The string to output.
fd: The file descriptor on which to write.
*/
//#include <stdio.h>
//#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
    int i;
    
    i = 0;
    while (s[i] != '\0')
    {
        write(fd, &s[i], 1);
        i++;
    }
}

/*
int main(void)
{
    char s[] = "abcdefg";
    printf("<string>\nabcdefg\n");
    printf("<result of ft_putstr_fd>\n");
    ft_putstr_fd(s, 1);
    return 0;
}
*/