/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:22:23 by yokitaga          #+#    #+#             */
/*   Updated: 2022/10/10 17:07:21 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
関数fが適用された文字列を返します。fの割り当てが失敗した場合はNULLを返します。
*/
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    char    *result;

    i = 0;
    if (s == NULL)
        return(NULL);
    result = ft_strdup(s);
    if (result == NULL)
        return(NULL);
    while (result[i] != '\0')
    {
        result[i] = f(i, result[i]);
        i++;
    }
    return (result);
}
