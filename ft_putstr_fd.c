/*
void ft_putstr_fd(char *s, int fd);
s: The string to output.
fd: The file descriptor on which to write.
*/

#include <unistd.h>

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