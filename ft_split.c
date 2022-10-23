/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:48:44 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/23 16:22:34 by yel-hadd         ###   ########.fr       */
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

static size_t	get_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (exists(c, (char *)s))
	{
		if (*s == c)
			count ++;
		s ++;
	}
	return (++ count);
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

	s = ft_strtrim(s, &c);
	if (!s)
		return (NULL);
	count = get_count(s, c);
	result = malloc(count * sizeof(char *) + 1);
	if (!result)
	    return (NULL);
	get_result(s, result, c);
	return (result);
}


int main(void)
{
    char *s = {",,,,,,,,ello,World,1,3444444444,*,,,,,,"};
    char c = ',';
    char **result = NULL;

    result = ft_split(s, c);
    printf("%s\n", result[0]);
}
