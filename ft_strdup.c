/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:33:21 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/17 16:54:22 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strdup(const char *s1)
{
	char 	*s2;
	size_t	len;

	len = ft_strlen(s1);
	s2 = ft_calloc(len, sizeof(char));
	if (!s2)
		return (0);
	ft_memcpy(s2, (const void*) s1, (len * sizeof(char)));
	return (s2);
}
