#include "libft.h"

int ft_tolower(int c)
{
    if (65 <= c && c <= 90)
        return (c + 32);
    else
        return (c);
}