/*callocのテストは積み残し*/
#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("result of ft_calloc\n");
    ft_calloc(0, 0);
    ft_calloc(1, 0);
    ft_calloc(0, 1);
    ft_calloc(1, 1);
    ft_calloc(42, 1);
    ft_calloc(1, 42);
    ft_calloc(42, 42);
    ft_calloc((size_t)SIZE_MAX / 10 + (size_t)1, 10);

    printf("====================\n");
    printf("result of calloc\n");
    calloc(0, 0);
    calloc(1, 0);
    calloc(0, 1);
    calloc(1, 1);
    calloc(42, 1);
    calloc(1, 42);
    calloc(42, 42);
    calloc((size_t)SIZE_MAX / 10 + (size_t)1, 10);
    return 0;
}