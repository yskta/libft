/*
memcpy - メモリー領域をコピーする。  
memcpy() はメモリー領域 src の先頭 n バイトを メモリー領域 dest にコピーする。コピー元の領域と コピー先の領域が重なってはならない。
重なっている場合は memmove(3) を使うこと。  
void *memcpy(void *dest, const void *src, size_t n);
memcpy() は dest へのポインターを返す。
*/

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;
    unsigned char *destc;
    unsigned char *srcc;

    if (dest == NULL && src == NULL)
        return (NULL);
    i = 0;
    destc = (unsigned char *)dest;
    srcc = (unsigned char *)src;
    while (i < n)
    {
        destc[i] = srcc[i];
        i++;
    }
    return (dest);
}