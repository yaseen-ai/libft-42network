/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:23:41 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/07 13:18:11 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!ft_strlen(s1))
		return ((unsigned char) *s1 - (unsigned char)*s2);
	if (!ft_strlen(s2))
		return ((unsigned char) *s1 - (unsigned char)*s2);
	while (*s1 && (n != 0))
	{
		if (*s1 != *s2)
			return ((unsigned char) *s1 - (unsigned char)*s2);
		n --;
		s1 ++;
		s2 ++;
	}
	return ((unsigned char) 0);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	*str1 = {"jfejfhbeifn"};
	char	*str2 = {""};
	int		num = 8;

	printf("%d", strncmp(str1, str2, num));
	if (strncmp(str1, str2, num) == ft_strncmp(str1, str2, num))
		printf("IDENTICAL BRO");
	else
		printf(" NOT IDENTICAL, KEEP TRYING!");
	
}
*/