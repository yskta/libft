/*
char *strchr(const char *s, int c);
文字列中の文字の位置を特定する
strchr() 関数は、文字列 s 中に最初に文字 c が現れた位置へのポインターを返す。
*/
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    char ch;

    ch = (unsigned char)c;
    while (*s != '\0')
    {
        if (*s == ch)
            return ((char *)s);
        s++;
    }
    if (ch == '\0')
        return((char *)s);
    return (NULL);
}