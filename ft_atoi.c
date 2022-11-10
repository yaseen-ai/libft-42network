/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:14:24 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/10 21:48:33 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	filter(char *str)
{
	if ((ft_strlen(str) >= 19)
		&& (ft_strncmp(str, "9223372036854775807", 19) >= 0))
		return (-1);
	if ((ft_strlen(str) >= 20)
		&& (ft_strncmp(str, "-9223372036854775807", 20) >= 0))
		return (0);
	return (1);
}

static int	ft_isspace(char c)
{
	if (c == ' ')
		return (1);
	if (c == '\f')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\r')
		return (1);
	if (c == '\t')
		return (1);
	if (c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (ft_isspace(*str))
		str ++;
	if (filter((char *) str) != 1)
		return (filter((char *) str));
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
