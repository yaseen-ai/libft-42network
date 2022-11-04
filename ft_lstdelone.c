/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 01:52:45 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/04 12:54:59 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
    ft_lstdelone(list->next, delete);
	while (list)
	{
		printf("%s\n", list->content);
		list = list->next;
	}
}*/