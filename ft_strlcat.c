/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:05:23 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/17 15:06:44 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t y;

	// what if dstsize is bigger than dst+src
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	y = 0;
	i = ft_strlen(dst);
	if (dstsize > i)
	{
		while(src[y] != '\0' && i < dstsize - 1)
			dst[i ++] = src[y ++];
		dst[i] = '\0';
	}
	return (dstsize);
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