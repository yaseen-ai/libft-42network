/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:07:49 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/07 12:16:20 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *s, int c)
{
	char	*save;

	save = (char *) 0;
	while (*s)
	{
		if (*s == c)
			save = (char *) s;
		s ++;
	}
	if (save == (char *) 0 && c == '\0')
		return (s);
	else
		return (save);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char testchar = '\0';
	char *str = {"Hello World!"};
	if (strrchr(str, testchar) == ft_strrchr(str, testchar))
		printf("IDENTICAL BRO");
}
*/
