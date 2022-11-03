/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 01:52:45 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/03 01:58:42 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_free(void *node)
{
    free(node);
}

void    ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
        return ;
    del(lst->content);
}
