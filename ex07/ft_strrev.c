/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmehloma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:17:22 by mmehloma          #+#    #+#             */
/*   Updated: 2020/06/24 15:36:00 by mmehloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_strrev(char *str)
{
	int i;
	int x;
	char *rev;

	i = 0;
	x = 0;
	while(str[x])
	{
		i++;
	}
	
	x = 0;

	while(str[i])
	{
		rev[x] = str[i];
		x++;
		i--;
	}

	while(rev[i])
	{
		write(1, &rev[i], 1);
	}

}

int main(void)
{
	
	ft_strrev("Hello");
	return 0;
	

/*	char *print;
	int i;

	i = 0;

	*print = *ft_strrev("Hello");

	while(print[i])
	{
		write(1, &print[i], 1);
		i++;
	}*/
}
