#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("<n1>\n-2147483648\n");
    printf("<result of ft_putnbr_fd>\n");
    ft_putnbr_fd(-2147483648, 1);
    printf("\n");
    printf("<n2>\n0\n");
    printf("<result of ft_putnbr_fd>\n");
    ft_putnbr_fd(0, 1);
    printf("\n");
    printf("<n3>\n2147483647\n");
    printf("<result of ft_putnbr_fd>\n");
    ft_putnbr_fd(2147483647, 1);
    printf("\n");
    return 0;
}