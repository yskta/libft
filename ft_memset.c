/*
memset() は s で示されるメモリー領域の先頭から n バイトを c で埋める。  
memset() は s へのポインターを返す。  
void *memset(void *s, int c, size_t n);
*/

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        ((unsigened char *)s)[i]　= c;
        i++;
    }
    return (s);
}