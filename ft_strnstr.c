/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:57:00 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/13 00:33:34 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	len;
	size_t	i;

	len = s2;
	if (len == 0)
		return (s1);
	while(*s1 ++)
	{
		i = 0;
		while (*s1+i == *s2+i)
		{
			if (i == len)
				return (s1 - i);
			i ++;
		}
	}
	return (0);
}
