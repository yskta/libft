#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    printf("＜result of ft_strlen＞\n");
    char buffer[61] = "How long am I?";
    printf("'%s' の長さは %zu バイトです。\n", buffer, ft_strlen(buffer));
    printf("====================\n");
    printf("＜result of strlen＞\n");
    printf("'%s' の長さは %lu バイトです。\n", buffer, strlen(buffer));
    return (0);
}