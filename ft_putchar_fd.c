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