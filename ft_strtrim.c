/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:04:48 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/19 14:42:22 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int char_exists(char c, char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set ++;
	}
	return (0);
}


char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*end;

	while (char_exists(*s1, (char *)set))
		s1 ++;
	len = ft_strlen(s1) - 1;
	end = (char *)s1 + len;
	while (char_exists(*end --,(char *)set))
		len --;
	return (ft_substr((char const *) s1, 0, len));
}

/*
#include <stdio.h>

int	main(void)
{
	char	*s1 = {"******------**************-*Hello World**-*********"};
	char	*set = {"*-"};
	char	*stop;

	stop = ft_strtrim(s1, set);
	printf("%s\n", stop);
}
*/