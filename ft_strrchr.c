/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:07:49 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/06 12:42:53 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	*save;

	if ((char) c == '\0')
		return (&s[ft_strlen(s)]);
	save = NULL;
	while (*s)
	{
		if (*s == (char) c)
			save = (char *) s;
		s ++;
	}
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
