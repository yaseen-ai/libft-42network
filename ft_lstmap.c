/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:06:07 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/05 15:43:26 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list    *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list    *tmp;
    t_list    *head;

    head = NULL;
    while (lst && f)
    {
        tmp = ft_lstnew(f(lst->content));
        if (!tmp)
        {
            ft_lstclear(&head, del);
            return (NULL);
        }
        ft_lstadd_back(&head, tmp);
        lst = lst->next;
    }
    return (head);
}
/*
static void	*ft_f(void *test)
{
	return (test);
}

int	main(void)
{
	t_list	*l1;
	t_list	*l2;
	void (*del)(void*) = &free;
	void *(*f)(void*) = &ft_f;

	l1 = malloc(sizeof(t_list *));
	l1 = ft_lstnew(ft_strdup("Hello World 1"));
	ft_lstadd_back(&l1, ft_lstnew(ft_strdup("Hello World 2")));
	ft_lstadd_back(&l1, ft_lstnew(ft_strdup("Hello World 3")));
	l2 = ft_lstmap(l1, f, del);
	while (l2)
	{
		printf("%s\n", l2->content);
		l2 = l2->next;
	}
}*/