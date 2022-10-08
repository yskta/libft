#include <stdio.h>
#include "libft.h"

int main(void)
{
    char s[] = "abcdefg";
    printf("<string>\nabcdefg\n");
    printf("<result of ft_putstr_fd>\n");
    ft_putstr_fd(s, 1);
    return 0;
}