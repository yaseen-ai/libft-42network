/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:28:15 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/29 14:23:40 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int num)
{
	int	result;

	if (num == 0)
		return (1);
	else
		result = 0;
	while (num)
	{
		num /= 10;
		result += 1;
	}
	return (result);
}

static char	*str_reverse(char *str)
{
	char	temp;
	size_t	i;
	size_t	j;

	if (ft_strlen(str) == 1)
		return (str);
	j = ft_strlen(str) - 1;
	i = 0;
	while (i <= j)
	{
		if (str[i] != '-')
		{				
			temp = str[i];
			str[i] = str[j];
			str[j] = temp;
			i ++;
			j --;
		}
		else
			i ++;
	}
	return (str);
}

static char	*get_str(n, len)
{
	char	*rev_result;
	size_t	i;

	rev_result = malloc(len * sizeof(char));
	if (!rev_result)
		return (rev_result);
	if (n < 0)
	{
		n = n * -1;
		rev_result[0] = '-';
		i = 1;
	}
	else
		i = 0;
	while (n)
	{
		rev_result[i ++] = ((n % 10) + 48);
		n /= 10;
	}
	rev_result[i] = '\0';
	return (str_reverse(rev_result));
}

static char	*return_zero(void)
{
	char	*result;

	result = malloc(2 * sizeof(char));
	if (!result)
		return (result);
	result[0] = '0';
	result[1] = '\0';
	return (result);
}

char	*ft_itoa(int n)
{
	int		sign;
	char	*result;
	size_t	i;
	char	*value;

	if (n >= 0)
		sign = 1;
	else
		sign = 2;
	if (n == 0)
		return (return_zero());
	else if (n == -2147483648)
	{
		result = malloc((get_len(n) + sign) * sizeof(char));
		if (!result)
			return (result);
		i = 0;
		value = "-2147483648";
		while (*value)
			result[i++] = *value++;
		result[i] = '\0';
	}
	else
		result = get_str(n, (get_len(n) + sign));
	return (result);
}
