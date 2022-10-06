/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:49:54 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/06 22:49:59 by yel-hadd         ###   ########.fr       */
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
