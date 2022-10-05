#include "libft.h"

int ft_isalpha(int c)
{
    if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
        return (1);
    else
        return (0);
}

int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	else
		return (0);
}

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) != 0) || (ft_isdigit(c) != 0))
		return (1);
	else
		return (0);
}