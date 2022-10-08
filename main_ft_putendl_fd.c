#include <stdio.h>
#include "libft.h"

int main(void)
{
    char s[] = "abcdefg";
    printf("<string>\nabcdefg\n");
    printf("<result of ft_putstr_fd>\n");
    ft_putendl_fd(s, 1);
    printf("<check new line>\n");
    return 0;
}