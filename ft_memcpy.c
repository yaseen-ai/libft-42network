/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:19:10 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/08 15:54:41 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	void	*dstcopy;

	dstcopy = dst;
	while (n -- > 0)
		*dstcopy ++ = *src ++;
		//*dst ++ = (void *) *src ++;
	return (dst)
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	void	*dest;


}
