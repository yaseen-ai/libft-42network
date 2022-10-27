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
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (0);
	while (start -- > 0)
		s ++;
	i = 0;
	while (i < len)
	{
		sub[i] = s[i];
		i ++;
	}
	sub[i] = '\0';
	return (sub);
}

/*
int	main(void)
{
	char *str = "i just want this part #############";
	size_t size = 20;
	char *ret = ft_substr(str, 5, size);

	printf("%s\n", ret);
}
*/
