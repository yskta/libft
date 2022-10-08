/*
itoa() 関数は整数 n を文字ストリングに変換します。
*/
#include "libft.h"
int 	cntdigit(long int n);
void	convert_int_to_char(long int n, char *num, int n_digit);

char	*ft_itoa(int n)
{
	char *num;
	int	n_digit;

	n_digit = cntdigit((long int)n);
	num = (char *)malloc(sizeof(char) * (n_digit + 1));
	if (num == NULL)
		return (NULL);
	num[n_digit] = '\0';
	n_digit -= 1;
	convert_int_to_char((long int)n, num, n_digit);
	return (num);
}

int 	cntdigit(long int n)
{
	if (n < 0)
		return (1 + cntdigit(-n));
	if ((n / 10 ) == 0)
		return (1);
	else
		return (1 + cntdigit(n / 10));
}

void	convert_int_to_char(long int n, char *num, int n_digit)
{
	if (n < 0)
	{
		num[0] = '-';
		n *= -1;
	}
	if (n >= 10)
		convert_int_to_char((n / 10), num, (n_digit - 1));
	num[n_digit] = (n % 10) + '0';
}