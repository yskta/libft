/*文字列の先頭に、 半角スペースやtab や Enterの改行文字の空白文字並びがある場合、それら無視しする繰り返しの処理します。*/
//#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

int ft_isspace(int c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int ft_isdigit(int c)
{
	if ( 48 <= c && c <= 57)
		return (1);
	else
		return (0);
}

int ft_atoi(const char *nptr)
{
	size_t	n;
	int		minus_flag;

	n = 0;
	minus_flag = 0;
	while (ft_isspace(*nptr) == 1)
		nptr++;
	if (*nptr == '-')
	{
		minus_flag = 1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr)== 1)
	{
		n = n * 10 + (*nptr - '0');
		nptr++;
	}
	if (minus_flag == 1)
		n *= -1;
	return ((int)n);
}

/*
int main(void)
{
    printf("result of ft_atoi\n");
    char nptr1[] = "1234";
    char nptr2[] = "   1234abc";
    printf("nptr1：%d\n", ft_atoi(nptr1));
    printf("nptr2：%d\n", ft_atoi(nptr2));
    printf("====================\n");
    printf("result of atoi\n");
    printf("nptr1：%d\n", atoi(nptr1));
    printf("nptr2：%d\n", atoi(nptr2));
    return 0;
}
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
AR 			= ar rcs
RM 			= rm -f
LIBNAME		= libft.h
NAME		= libft.a
SRCS		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
OBJS		= $(SRCS:%.c=%.o)
all : 		$(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	$(AR) $(NAME) $(OBJS)

clean :
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re 
*/