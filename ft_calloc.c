/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:12:46 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/17 16:30:47 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	void	*ptrcpy;

	ptr = malloc(size * count);
	ptrcpy = ptr;
	if (!ptr)
		return (0);
	ft_bzero(ptr, count);
	return (ptrcpy);
}
