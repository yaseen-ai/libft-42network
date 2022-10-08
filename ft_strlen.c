/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:50:37 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/08 14:11:46 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
	size_t	count;
	int		i;
	
	i = 0;
	count = 0;
	while(s[i])
	{
		count += 1;
		i ++;
	}
	return (count);
}

/*
int main(void)
{
	char *str = {"Hello World"};

	printf("Original Function : %lu || My Function : %lu\n", strlen(str), ft_strlen(str));
}
*/
