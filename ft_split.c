/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:48:44 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/09 17:20:49 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void free_a(char **arr)
{
	size_t	i;

	i = 0;
	while (*arr)
		free(arr ++);
	free(arr);
}

static size_t	get_count(char *s, char c)
{
	size_t	i;
	size_t	count;	

	i = 0;
	count = 0;
	while (s[i++])
	{
		if ((s[i] == c) && (s[i+1] != c) && (s[i+1] != '\0'))
			count ++;
	}
	return (count);
}

char	*get_start(char *s, char c)
{
	while ((*s != c) && *s)
		s ++;
	while ((*s == c) && *s)
		s ++;
	return (s);
}

unsigned int	get_stop(char *s, char c)
{
	size_t	count;

	count = 0;
	while ((*s != c) && *s)
	{
		s ++;
		count ++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	i;
	char	*start;
	char	**result;
	char	*temp;

	if (!s || !*s)
		return (NULL);
	s = ft_strtrim(s, &c);
	count = get_count((char *)s, c);
	result = (char **) malloc((count+1)*sizeof(char *));
	if (!result)
		return (NULL);
	start = (char *) s;
	i = 0;
	while (i <= count)
	{
		temp = ft_substr(start, 0, get_stop(start, c));
		if (!temp)
		{
			free_a(result);
			return (NULL);
		}
		result[i] = temp;
		start = get_start(start, c);
		if (!start)
			break;
		i ++;
	}
	result[i] = (char *) NULL;
	return (result);
}

/*
int main(void)
{
    char *s = "lorem  ";
	char **result;
	size_t	i;

	i = 0;
	result = ft_split(s, ' ');
	while (result[i])
	{
		printf("%s\n", result[i]);
		i ++;
	}
}
*/