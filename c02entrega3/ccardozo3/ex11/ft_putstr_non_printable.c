/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:46:22 by ccardozo          #+#    #+#             */
/*   Updated: 2019/09/19 10:35:12 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void				ft_putstr_non_printable(char *str)
{
	unsigned char	bhexa[2];
	char			tmp;

	while (*str != '\0')
	{
		if (*str > 31)
			write(1, str, 1);
		else
		{
			tmp = (unsigned char)*str / 16;
			if (tmp < 10)
				bhexa[0] = tmp + 48;
			else
				bhexa[0] = tmp + 87;
			tmp = (unsigned char)*str % 16;
			if (tmp < 10)
				bhexa[1] = tmp + 48;
			else
				bhexa[1] = tmp + 87;
			write(1, "\\", 1);
			write(1, &bhexa[0], 1);
			write(1, &bhexa[1], 1);
		}
		str++;
	}
}
