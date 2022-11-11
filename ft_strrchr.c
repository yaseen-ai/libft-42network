/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:07:49 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/11 16:36:31 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	*save;

	if ((char) c == '\0')
		return (&s[ft_strlen(s)]);
	save = NULL;
	while (*s)
	{
		if (*s == (char) c)
			save = (char *) s;
		s ++;
	}
	return (save);
}
