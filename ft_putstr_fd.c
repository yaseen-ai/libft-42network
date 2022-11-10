/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:03:49 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/30 13:07:52 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void    ft_putstr_fd(char *s, int fd)
{
    if (!s)
        return ;
    while(*s)
        ft_putchar_fd(*s ++, fd);
}


// int main()
// {
//     int fd = open("file.txt", O_RDWR | O_APPEND);
//     ft_putstr_fd("Hello World\n", fd);   
// }