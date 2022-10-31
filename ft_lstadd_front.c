/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:01:45 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/31 13:53:19 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void    ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = (*lst)->content;
	
	*lst->next = NULL;
}
/*
int main(void)
{
	t_list	*list;
	t_list	add;
	char	*str = {"green day"};

	list = ft_lstnew(str);
	printf("%s\n", list->content);
	add.content = "Hello, World!";
	ft_lstadd_front(&list, &add);
	printf("%s\n", *add->next);
}*/