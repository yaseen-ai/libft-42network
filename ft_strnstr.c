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
	char	*start;

	start = (char *) haystack;
	nlen = ft_strlen(needle);
	if (!nlen)
		return (0);
	while (*haystack ++ && len -- > 0)
	{
		i = 0;
		while (haystack[i] == needle[i])
			i += 1;
		if (i == nlen)
			return ((char *) haystack);
	}
	return (start);
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char *s1 = {"Hello World"};
	char *s2 = {"o "};

	printf("%s\n", ft_strnstr(s1, s2, 20));
}
*/
