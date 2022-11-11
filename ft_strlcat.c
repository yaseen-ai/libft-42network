/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:05:23 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/11 16:35:45 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	y;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	y = dlen;
	i = 0;
	slen = ft_strlen(src);
	if (!dstsize || dstsize <= dlen)
		return (dstsize + slen);
	while (y < dstsize -1 && src[i])
		dst[y ++] = src[i ++];
	dst[y] = '\0';
	return (dlen + slen);
}
