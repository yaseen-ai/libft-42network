/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:50:46 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/04 13:07:01 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !(*lst))
		return ;
	tmp = *lst;
	while (*lst)
	{
		*lst = (*lst)->next;
		ft_lstdelone(tmp, del);
		tmp = *lst;
	}
}
/*
int main(void)
{
	t_list	*list;
	t_list	*new;
    void (*delete)(void*) = &free;

	list = malloc(sizeof(t_list *));
	list = ft_lstnew(ft_strdup("AB"));
	new = ft_lstnew(ft_strdup("CD"));
	ft_lstadd_back(&list, new);
    ft_lstclear(&list, delete);
	while (list)
	{
		printf("%s\n", list->content);
		list = list->next;
	}
}*/