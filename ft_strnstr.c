/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:01:23 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/07 02:12:16 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hlen;
	size_t	nlen;
	size_t	i;
	size_t	y;
	char	*copy;

	copy = (char *) haystack;
	hlen = ft_strlen(haystack);
	nlen = ft_strlen(needle);
	if (!nlen)
		return (copy);
	if (hlen < nlen)
		return (NULL);
	i = 0;
	while (copy[i] && i < len)
	{
		y = 0;
		while ((needle[y] == copy[i + y]) && (y + i < len))
		{
			if (!needle[++ y])
				return (copy + i);
		}
		i ++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char *s1 = "see FF your FF return FF now FF";
	char *s2 = "FF";
	size_t max = strlen(s1);
	char *i1 = strnstr(s1, s2, max);
	char *i2 = ft_strnstr(s1, s2, max);

	printf("%s\n", i1);
	printf("%s\n", i2);
}
*/