/*
char *strchr(const char *s, int c);
文字列中の文字の位置を特定する
strchr() 関数は、文字列 s 中に最初に文字 c が現れた位置へのポインターを返す。
*/

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    char ch;

    ch = (unsigned char)c;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == ch)
            return ((char *)&s[i]);
        i++;
    }
    if (ch == '\0')
        return((char *)&s[i]);
    return (NULL);
}