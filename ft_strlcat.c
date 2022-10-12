/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:05:23 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/12 22:53:47 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	counter;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	counter = dstsize - dstlen - 1;
	dst += dstlen;
	while (*src && counter --)
		*dst ++ = *src ++;
	*dst = '\0';
	return (dstlen + srclen);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	dst[50];
	//char	*src = {" World!"};
	char	*src = {""};
	size_t	dstsize = 12;
	size_t	temp;
	
	dst[0] = 'H';
	dst[1] = 'e';
	dst[2] = 'l';
	dst[3] = 'l';
	dst[4] = 'o';
	temp = ft_strlcat(dst, src, dstsize);
	printf("%s\n", dst);
	printf("%lu", temp);
}
*/
