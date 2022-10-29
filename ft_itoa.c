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

static int	get_sign(int num)
{
	if (num >= 0)
		return (1);
	else
		return (2);
}

static char	*get_revstr(n, len)
{
	char	*rev_result;
	size_t	i;

	if (n < 0)
		n = n * -1;
	rev_result = malloc(len * sizeof(char));
	if (n == 0)
	{
		rev_result[0] = '0';
		rev_result[1] = '\0';
		return (rev_result);
	}
	i = 0;
	while (n)
	{
		rev_result[i ++] = (char)((n % 10) + 48);
		n /= 10;
	}
	rev_result[i] = '\0';
	return (rev_result);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*result;
	char	*rev_result;
	char	*start;

	result = malloc((get_len(n) + get_sign(n)) * sizeof(char));
	if (!result)
		return (result);
	rev_result = get_revstr(n, (get_len(n)+get_sign(n)));
	start = rev_result;
	rev_result += (ft_strlen(rev_result) - 1);
	if (get_sign(n) > 1)
	{
		i = 1;
		result[0] = '-';
		while (i < (get_len(n) + 1))
			result[i ++] = *rev_result --;
		result[i] = '\0';
	}
	else
	{
		i = 0;
		while (i < get_len(n))
			result[i ++] = *rev_result --;
	}
	free(start);
	return (result);
}

/*
int main(void)
{
    printf("%s\n", ft_itoa(-2147483648));
}
*/
