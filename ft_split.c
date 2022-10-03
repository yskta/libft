/*
ファイルを複数に分割する  
INPUT を PREFIXaa, PREFIXab, ... という固定サイズのファイルに分割します。 デフォルトのサイズは 1000 行です。デフォルトの PREFIX は 'x' です。
ファイルの指定がない場合や FILE が - の場合, 標準入力から読み込みを行います。
長いオプションで必須となっている引数は短いオプションでも必須です。
*/

#include "libft.h"
void	ft_createsplit(char **result, char const *s, char c);
size_t	ft_addpart(char **result, const char *prev, size_t size, char c);
size_t	ft_count(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	ft_createsplit(result, s, c);
	return (result);
}

void	ft_createsplit(char **result, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	size;
	size_t	prev;
	size_t	next;

	i = 0;
	j = 0;
	prev = i;
	next = i;
	while (1)
	{
		if (s[i] == c || s[i] == '\0')
			next = i;
		size = next - prev;
		if (size > 1 || (size == 1 && s[i - 1] != c))
			j += ft_addpart(&result[j], &s[prev], size, c);
		if (s[i] == '\0')
			break ;
		prev = next;
		i++;
	}
	result[j] = NULL;
}

size_t	ft_addpart(char **result, const char *prev, size_t size, char c)
{
	if (*prev == c)
	{
		prev++;
		size--;
	}
	*result = (char *)malloc((size + 1) * sizeof(char));
	ft_strlcpy(*result, prev, size + 1);
	return (1);
}

size_t	ft_count(const char *s, char c)
{
	size_t	i;
	size_t	prev;
	size_t	next;
	size_t	size;
	size_t	counter;

	i = 0;
	prev = i;
	next = i;
	counter = 0;
	while (1)
	{
		if (s[i] == c || s[i] == '\0')
			next = i;
		size = next - prev;
		if (size > 1 || (size == 1 && s[i - 1] != c))
			counter++;
		if (s[i] == '\0')
			break ;
		prev = next;
		i++;
	}
	return (counter);
}