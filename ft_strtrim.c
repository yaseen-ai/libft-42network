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
#include <stdio.h>

char *getstart(char *s1, char const *set)
{
	char	*start;
	while (*s1)
}


char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*start;
	//char	*stop;

	while (*s1)
	{
		while (*set)
	}
	return ((char *)s1);
}

int	main(void)
{
	char	*s1 = {"*-*Hello World*-"};
	char	*set = {"*-*"};
	printf("%s\n", ft_strtrim(s1, set));
}