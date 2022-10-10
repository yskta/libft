/*
s: The string to output.
fd: The file descriptor on which to write.
putstrの最後に改行がついているver
*/
//#include <stdio.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

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

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
int main(void)
{
    char s[] = "abcdefg";
    printf("<string>\nabcdefg\n");
    printf("<result of ft_putendl_fd>\n");
    ft_putendl_fd(s, 1);
    printf("<check new line>\n");
    return 0;
}
*/