/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:48:44 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/08 00:50:46 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*getnextstart(char *str, char c)
{
	while (*str != c && *str)
		str ++;
	while (*str == c && *str)
		str ++;
	return (str);
}

static size_t	getnextstop(char *str, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(str);
	while (str[i] != c && i < len)
		i ++;
	return (i);
}

static char	**fill(char **result, char *copy, char c, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		result[i] = ft_substr(copy, 0, getnextstop(copy, c));
		copy = getnextstart(copy, c);
		i ++;
	}
	result[i] = (char *) NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	*copy;
	char	**result;
	size_t	i;
	size_t	count;

	if (!s || !c)
		return (NULL);
	i = 0;
	count = 1;
	copy = (char *)s;
	copy = ft_strtrim(copy, &c);
	while (copy[i])
	{
		if (copy[i] == c && copy[i + 1] != c)
			count ++;
		i ++;
	}
	result = malloc((count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result = fill(result, copy, c, count);
	free(copy);
	return (result);
}

/*
int main(void)
{
    char *s = {",,,,,,,,ello,,,,,,World,1,3444444444,*,,,,,,"};
    char c = ',';
    char **result = NULL;
    result = ft_split(s, c);
    printf("%s\n", result[0]);
}
*/
