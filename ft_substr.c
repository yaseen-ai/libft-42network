/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:58:57 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/08 00:36:01 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (len > slen - start)
		len = slen - start;
	if (start >= slen)
		return (ft_strdup(""));
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	s += start;
	ft_memcpy(sub, s, len);
	sub[len] = '\0';
	return (sub);
}
