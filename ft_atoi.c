/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:14:24 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/17 15:04:44 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (ft_isspace(*str))
		str ++;
	if ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			sign = -1;
		str ++;
	}
	while (ft_isdigit(*str))
	{
		result = (result * 10) + (*str - 48);
		str ++;
	}
	return (result * sign);
}

/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%d\n", ft_atoi(argv[1]));
}
*/
