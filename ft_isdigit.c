/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:46:46 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/05 21:15:21 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);	
}

/*
int main(void)
{
	int test = 57;
	printf("%d\n", ft_isdigit(test));
	printf("%d", isdigit(test));
}*/
