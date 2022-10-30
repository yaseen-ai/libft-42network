/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:13:21 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/30 13:29:12 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n == 0)
		ft_putchar_fd(48, fd);
	if (n <= 9)
		ft_putchar_fd((48 + n), fd);
	else
	{
		ft_putchar_fd((48 + (n / 10)), fd);
		ft_putchar_fd((48 + (n % 10)), fd);
	}
}

int	main(void)
{
	ft_putnbr_fd(115, 1);
}
