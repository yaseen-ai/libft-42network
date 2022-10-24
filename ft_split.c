/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:48:44 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/23 17:32:25 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	exists(char c, char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set ++;
	}
	return (0);
}

static char	*ft_write(char *dst, char *src, size_t count)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = dst;
	while (*src && i ++ < count)
		*dst ++ = *src ++;
	*dst = '\0';
	return (temp);
}

static char	**get_result(const char *s, char **result, char c)
{
	size_t	temp;

	temp = 0;
	while (1)
	{
		if (*s == c || !*s)
		{
			*result = malloc((temp + 1) * sizeof(char *));
			*result = ft_write(*result, (char *)s - temp, temp);
			result ++;
			temp = 0;
			if (!*s)
				break ;
		}
		if (*s != c)
			temp ++;
		s ++;
	}
	*result = (char *) NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;
	size_t	i;

	s = ft_strtrim(s, &c);
	if (!s)
		return (NULL);
	count = 0;
	i = 0;
	while (exists(c, (char *)&s[i]))
	{
		if (s[i] == c)
			count ++;
		i ++;
	}
	result = malloc(count * sizeof(char *) + 1);
	if (!result)
		return (NULL);
	get_result(s, result, c);
	return (result);
}
/*
int main(void)
{
    char *s = {",,,,,,,,ello,World,1,3444444444,*,,,,,,"};
    char c = ',';
    char **result = NULL;

    result = ft_split(s, c);
    printf("%s\n", result[0]);
}
*/
