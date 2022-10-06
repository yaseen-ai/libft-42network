/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:17:36 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/06 22:28:05 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}

/*
#include <ctype.h>
#include <stdio.h>
int main(void)
{
	char test = 'A';

	while (test <= 'Z' + 1)
	{
		printf("Original Function : %c || My Function : %c\n", tolower(test), ft_tolower(test));
		test ++;
	}
}
*/
