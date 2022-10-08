/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:19:10 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/08 16:30:57 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*dstcopy;

	dstcopy = dst;
	while (n -- > 0)
		*dstcopy ++ = *(char *)src ++;
	return (dst);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*src = {"Hi boss, can I have a hamburger please?"};
	size_t	n = ft_strlen(src);
	char	dst[n];
	
	ft_memcpy(dst, src, n);
	printf("%s", dst);
}
*/
