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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char buffer[ft_strlen(src)-1];

	ft_memcpy(buffer, src, len);
	ft_memcpy(dst, buffer, len);
	//printf("%s", dst);
	return (dst);
}
