/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:22:59 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/10 22:19:14 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*srcpy;
	unsigned char	*dstcpy;

	srcpy = (unsigned char*)src;
	dstcpy = (unsigned char*)dst;
	if (!src && !dst)
		return (NULL);
	if (dstcpy > srcpy)
		while (len --)
			dstcpy[len] = srcpy[len];
	else if (dstcpy < srcpy)
		ft_memcpy(dst, src, len);
	return (dst);
}

/*
int main(void)
{
	char dst[12];
	char *src = {"Hello World!"};

	ft_memmove(dst, src, 11);
	printf("%s", dst);
}*/