/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:05:23 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/07 01:10:35 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
/*
int	main(void)
{
	char	dst[30];
	char	*src = {"World!"};
	size_t	temp;
	dst[0] = 'A';
	dst[1] = 'A';
	dst[2] = 'A';
	dst[3] = 'B';
	dst[4] = '\0';

	temp = ft_strlcat(dst, src, 11);
	printf("%s\n", dst);
	printf("%zu\n", temp);
}
*/