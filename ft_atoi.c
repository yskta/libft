#include "libft.h"

/*文字列の先頭に、 半角スペースやtab や Enterの改行文字の空白文字並びがある場合、それら無視しする繰り返しの処理します。*/
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

int			ft_atoi(const char *nptr)
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