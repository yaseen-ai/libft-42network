/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:01:45 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/02 22:44:32 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


/*
new => lst
lst = > 
*/


void    ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}

int main(void)
{
	t_list	*list;
	t_list	*new;
	char	*str = {"AB"};
	char	*str2 = {"CD"};

	list = ft_lstnew(str);
	new = ft_lstnew(str2);
	ft_lstadd_front(&list, new);
	while (list)
	{
		printf("%s", list->content);
		list = list->next;
	}
}