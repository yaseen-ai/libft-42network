/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 01:52:45 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/03 19:46:54 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
        return ;
    del(lst->content);
}

/*
static void ft_free(void *node)
{
   free(node);
   printf("*\n");
}

int main(void)
{
	t_list	*list;
	t_list	*new;
	char	*str = {"AB"};
    void (*delete)(void*) = &ft_free;

	list = ft_lstnew(str);
	new = ft_lstnew(ft_strdup("CD"));
	ft_lstadd_back(&list, new);
    ft_lstdelone(list->next, delete);
	while (list)
	{
		printf("%s\n", list->content);
		list = list->next;
	}
}*/