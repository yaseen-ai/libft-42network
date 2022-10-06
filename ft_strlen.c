/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:41:09 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/10/06 18:53:49 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


size_t ft_strlen(const char *s)
{
	size_t	count;
	int		i;
	
	i = 0;
	count = 0;
	while(s[i])
	{
		count += 1;
		i ++;
	}
	return (count);
}

/*
int main(void)
{
	char *str = {"Hello World"};

	printf("Original Function : %lu || My Function : %lu\n", strlen(str), ft_strlen(str));
}
*/
