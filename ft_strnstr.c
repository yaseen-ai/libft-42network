/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:01:23 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/16 16:31:23 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	i;
	size_t	j;

	nlen = ft_strlen(needle);
	if (!nlen || (haystack == needle) || !len)
		return ((char *) haystack);
	j = 0;
	while (*haystack ++ && j < len)
	{
		i = 0;
		while (haystack[i] == needle[i])
		{
			i += 1;
			j ++;
		}
		if (i == nlen && j < len)
			return ((char *) haystack);
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