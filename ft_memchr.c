/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:01:41 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/08 14:13:41 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if ((unsigned char)c == *(unsigned char*) s)
			return ((void *) s);
		s ++;
		n --;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char *s = {"Hello boss can I have a hamburger please?"};
	int c = 'H';
	size_t n = ft_strlen(s);
	
	if (ft_memchr(s, c, n) == memchr(s, c, n))
		printf("Identical");
	else
		printf("not identical, retry!");
}
*/
