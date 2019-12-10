/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:54:42 by ccardozo          #+#    #+#             */
/*   Updated: 2019/09/09 20:23:29 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_var(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char u;
	char d;
	char c;

	u = '0';
	while (u <= '7')
	{
		d = u + 1;
		while (d <= '8')
		{
			c = d + 1;
			while (c <= '9')
			{
				ft_print_var(u, d, c);
				c++;
			}
			d++;
		}
		u++;
	}
}
