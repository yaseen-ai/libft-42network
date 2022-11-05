/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 00:57:28 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/05 15:42:24 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (!temp)
		*lst = new;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
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
	ft_lstadd_back(&list, new);
	while (list)
	{
		printf("%s", list->content);
		list = list->next;
	}
}*/