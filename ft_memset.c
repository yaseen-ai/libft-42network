/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:24:41 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/07 14:39:41 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	while (len != 0)
	{
		*(unsigned char*)b = (unsigned char) c;
		b ++;
		-- len;
	}
}

#include <stdio.h>

int	main(void)
{
	void	*b = NULL;
	int		c = 90;
	size_t	len = 60;

	ft_memset(b, c, len);
	printf("%s", b);
}
