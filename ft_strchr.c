/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:54:00 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/06 23:14:37 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *s, int c)
{
	unsigned long	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i ++;
	}
	if (c == '\0')
		return (&s[i]);
	else
		return (0);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char testchar = '\0';
	char *str = {"Hello World!"};
	if (strchr(str, testchar) == ft_strchr(str, testchar))
		printf("IDENTICAL BRO");
}
*/
