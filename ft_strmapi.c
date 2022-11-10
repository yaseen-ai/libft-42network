/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:00:27 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/10 20:59:23 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;
	size_t			len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = (char *) malloc((len + 1) * sizeof(char));
	if (!result || !s)
		return (result);
	i = 0;
	while (*s)
	{
		result[i] = f(i, *s++);
		i ++;
	}
	result[i] = '\0';
	return (result);
}
