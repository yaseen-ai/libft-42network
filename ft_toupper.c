/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:03:15 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/06 19:39:24 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>


int ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int	ft_toupper(int c)
{
	if (ft_islower(c))
	{
		return (c - 32);
	}
	return (c);
}

/*
#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char test = 'a';

	while (test <= 'z' + 1)
	{
		printf("Original Function : %c || My Function : %c\n", toupper(test), ft_toupper(test));
		test ++;
	}
}
*/
