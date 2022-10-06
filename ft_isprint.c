/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:31:16 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/06 18:12:18 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isprint(int c)
{
	if (c >= 32 && c<= 126)
		return (1);
	return (0);
}

/*
int main(void)
{
	int i = 0;
	while ( i <= 127)
	{
		printf("Original function : %d || My Function : %d\n", isprint(i), ft_isprint(i));
		i ++;
	}
}
*/

