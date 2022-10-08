/*
void ft_putnbr_fd(int n, int fd);
n: The integer to output.
fd: The file descriptor on which to write.
Outputs the integer ’n’ to the given file
descriptor.
再帰関数で実装
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(214748364, fd);
		ft_putchar_fd('8', fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd((n * -1), fd);
	}
	else if (0 <= n && n < 10)
	{
		ft_putchar_fd((n + '0'), fd); /*int→char*/
	}
	else if (10 <= n) 
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd((n % 10 + '0'), fd);
	}
}