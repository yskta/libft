#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    printf("<result of ft_strjoin>\n");
    char s1[] = "ABCDDEFG";
    char s2[] = "123456789";
    printf("%s\n", ft_strjoin(s1, s2));
    return (0);
}