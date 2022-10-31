/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:34:56 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/31 12:48:36 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (!ptr)
		return (ptr);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}

/*
int main(void)
{
	char    *s = {"Wake me up when it's all over"};
	t_list  *result;

	result = ft_lstnew(s);
	printf("%s", result->content);
}
*/