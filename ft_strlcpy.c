/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:20:55 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/12 21:01:15 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	
	srclen = ft_strlen(src); 
	if (dstsize == 0)
		return (srclen);
	while ((*src != '\0') && (-- dstsize > 0))
		*dst ++ = *src ++;
	*dst = '\0';
	return (srclen);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dst[20];
	char *src = {"lo world!"};
	size_t	n;

	dst[0] = 'H';
	dst[1] = 'e';
	n = ft_strlcpy(dst, src, 9);	
	//n = strlcpy(dst, src, 9);	
	printf("%lu\n", n);
	printf("%s", dst);
}
*/
