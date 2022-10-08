#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*ptr;

	ptr = malloc(number * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (number * size));
	return (ptr);
}