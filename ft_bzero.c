/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:35:11 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/10 21:42:35 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset((void *) s, 0, (size_t) n);
}

#include <stdio.h>
#include <string.h>
/*
int main(void)
{
	char	s[]=;
	size_t	n = 5;

	ft_bzero(s, n);
	printf("%s", s);	
}*/

int main (void)
{
    //char str[30] = "ABCD EFGH";
    char src[] = "Hello mok";
    //char dst[] = "we are";

    bzero(src, 5);

	printf("%s", src);
}
