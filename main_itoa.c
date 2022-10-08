#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("result of ft_itoa\n");
    int n1 = 1234;
    int n2 = 2147483647;
    int n3 = -2147483648;
    printf("n1：%s\n", ft_itoa(n1));
    printf("n2：%s\n", ft_itoa(n2));
    printf("n3：%s\n", ft_itoa(n3));
    return 0;
}

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i] != '\0')
		(*f)(i, &s[i]);
}