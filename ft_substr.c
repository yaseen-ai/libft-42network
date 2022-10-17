/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:58:57 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/17 17:30:43 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	sub = malloc((len - start) * sizeof(char));
	if (!sub)
		return (0);
	while ((start + i) <= len)
	{
		sub[i] = s[start + i];
		i ++;
	}
	return (sub);
}

/*
int	main(void)
{
	char const	*str1 = {"Hello World"};

	printf("%s", ft_substr(str1, (unsigned int) 6, ft_strlen(str1)));
}
*/
