/*
memset() は s で示されるメモリー領域の先頭から n バイトを c で埋める。  
memset() は s へのポインターを返す。  
void *memset(void *s, int c, size_t n);

bzero - 値 0 のバイトで埋める 
bzero() 関数は バイト列 s から始まる領域の先頭 n バイトを 数値ゼロ (値が '\0' のバイト) で埋める。  
返り値はなし
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

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, '\0', n);
}
