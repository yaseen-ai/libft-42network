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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = strlen(dst);
	srclen = strlen(src);
	if (dstlen < dstsize - 1)
	{
		i = dstsize - dstlen - 1;
		dst += dstlen;
		while (*src && i-- && !*dst)
			*(dst ++) = *(src ++);
		*dst = '\0';
	}
	return (dstlen + srclen);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst[30];
	char	*src = {"World!"};
	//char	*src = {""};
	size_t	temp;
	dst[0] = 'A';
	dst[1] = 'A';
	dst[2] = 'A';
	dst[3] = 'A';
	dst[3] = '\0';

	printf("%s\n", dst);
	temp = strlcat(dst, src, 9);
	printf("%s\n", dst);
	printf("%zu\n", temp);
}*/
