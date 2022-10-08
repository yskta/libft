/*文字列の先頭に、 半角スペースやtab や Enterの改行文字の空白文字並びがある場合、それら無視しする繰り返しの処理します。*/
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int ft_isspace(int c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int ft_isdigit(int c)
{
	if ( 48 <= c && c <= 57)
		return (1);
	else
		return (0);
}

int ft_atoi(const char *nptr)
{
	size_t	n;
	int		minus_flag;

	n = 0;
	minus_flag = 0;
	while (ft_isspace(*nptr) == 1)
		nptr++;
	if (*nptr == '-')
	{
		minus_flag = 1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr)== 1)
	{
		n = n * 10 + (*nptr - '0');
		nptr++;
	}
	if (minus_flag == 1)
		n *= -1;
	return ((int)n);
}

int main(void)
{
    printf("result of ft_atoi\n");
    char nptr1[] = "1234";
    char nptr2[] = "   1234abc";
    printf("nptr1：%d\n", ft_atoi(nptr1));
    printf("nptr2：%d\n", ft_atoi(nptr2));
    printf("====================\n");
    printf("result of atoi\n");
    printf("nptr1：%d\n", atoi(nptr1));
    printf("nptr2：%d\n", atoi(nptr2));
    return 0;
}