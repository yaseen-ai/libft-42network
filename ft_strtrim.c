/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:04:48 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/11 16:36:37 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_exists(char c, char *set)
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

	if (!s1 || !set)
		return (0);
	while (char_exists(*s1, (char *)set))
		s1 ++;
	len = ft_strlen(s1);
	end = (char *)s1 + len - 1;
	while (char_exists(*end --, (char *)set))
		len --;
	return (ft_substr((char const *) s1, 0, len));
}
