/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:35:56 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/08 18:03:02 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (ft_strlen(s1) <= 0)
		return (0);
	while (n -- > 0)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return ((*(unsigned char*) s1 --) - (*(unsigned char*) s2 --));
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s1 = {"\0"};
	char	*s2 = {"\0"};
	size_t	n = ft_strlen(s1);
	printf("%d\n", ft_memcmp(s1, s2, n));
	printf("%d\n", memcmp(s1, s2, n));
}
*/
