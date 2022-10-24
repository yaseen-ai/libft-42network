/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:19:10 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/10 22:13:38 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*dstcpy;

	dstcpy = dst;
	if (dst == NULL && src == NULL)
		return (dstcpy);
	while ((n > 0))
	{
		*(char *)dst ++ = *(char *)src ++;
		n --;
	}
	return (dstcpy);
}


/*
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*dstcpy;

	dstcpy = dst;
	if (dst == NULL)
		return (dstcpy);
	while ((n > 0))
	{
		*(char *)dst ++ = *(char *)src ++;
		n --;
	}
	return (dstcpy);
}
*/

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*src = "Hi boss, can I have a hamburger please?";
	size_t	n = ft_strlen(src);
	char	dst[n];
	
	ft_memcpy(dst, src, n);
	printf("%s", dst);
}
*/
