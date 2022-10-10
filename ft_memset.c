/*
memset() は s で示されるメモリー領域の先頭から n バイトを c で埋める。 
先頭から2バイト進めた位置に「１」を3バイト書き込む
    memset(buf+2,'1',3);
memset() は s へのポインターを返す。  
void *memset(void *s, int c, size_t n);
*/
//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    char *d;

    d = (char *)s;
    while (n--)
    {
        *d = c;
        d++;
    }
    return (s);
}

/*
int main(void)
{
    printf("result of ft_memset\n");
    char str1[] = "0123456789";
    memset(str1+2, '*', 5);
    printf("%s\n", str1);
    printf("====================\n");
    printf("result of memset\n");

    char str2[] = "0123456789";
    memset(str2+2, '*', 5);
    printf("%s\n", str2);
    return (0);
}
*/