/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:13:26 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/06 17:49:04 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
int	main(void)
{
	int i = 0;
	
	while (i <= 127)
	{
		printf("Original: %d | My Function: %d\n", ft_isascii(i), isascii(i));
		i ++;
	}
}
*/
