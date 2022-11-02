/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 00:33:01 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/03 00:55:31 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (lst);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int main(void)
{
	t_list	*list;
	t_list	*new;
	char	*str = {"AB"};
	char	*str2 = {"CD"};

	list = ft_lstnew(str);
	new = ft_lstnew(str2);
	ft_lstadd_front(&list, new);
	ft_lstlast(list);
	printf("%s", list->content);
}*/