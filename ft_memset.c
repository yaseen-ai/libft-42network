/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:24:41 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/10 21:41:41 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pb;

	pb = (unsigned char*) b;
	while (len != 0)
	{
		*pb = (unsigned char) c;
		pb ++;
		len --;
	}
	return (b);
}

/*
#include <stdio.h>

int	main(void)
{
	char	b[60];
	int		c = 0;
	size_t	len = 60;

	ft_memset(b, c, len);
	printf("%s", b);
}
*/
