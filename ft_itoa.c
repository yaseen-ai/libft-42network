/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:28:15 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/28 17:28:17 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int get_len(int num)
{
    int result;

    if (num == 0)
        return (1);
    else
        result = 0;
    while (num)
    {
        num /= 10;
        result += 1;
    }
    return (result);
}

static int get_sign(int num)
{
    if (num >= 0)
        return (1);
    else
        return (2);
}

static char    *get_revstr(n, len)
{
    char    *rev_result;
    size_t  i;

    if (n < 0)
        n = n * -1;
    rev_result = malloc((len + 1) * sizeof(char));
    i = 0;
    if (n == 0)
    {
        rev_result[0] = '0';
        rev_result[1] = '\0';
        return (rev_result);
    }
    while (n)
    {
        rev_result[i ++] = (char)((n % 10) + 48);
        n /= 10;
    }
    rev_result[i] = '\0';
    return (rev_result);
}

char *ft_itoa(int n)
{
    int     i;
    char    *result;
    char    *rev_result;

    result = malloc((get_len(n) + get_sign(n)) * sizeof(char));
    rev_result = get_revstr(n, get_len(n));
    rev_result += (strlen(rev_result) - 1);
    if (get_sign(n) > 1)
    {
        i = 1;
        result[0] = '-';
        while(i < (get_len(n) + 1))
        result[i ++] = *rev_result --;
    }
    else
    {
        i = 0;
        while(i < get_len(n))
        result[i ++] = *rev_result --;
    }
    return (result);
}

int main(void)
{
    printf("%s\n", ft_itoa(0));
}