/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 13:43:44 by ccardozo          #+#    #+#             */
/*   Updated: 2019/09/26 15:42:29 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nbr)
{
	int	sqrt;
	int i;

	sqrt = 1;
	i = 1;
	if (nbr == 0)
		return (0);
	while (sqrt * sqrt < nbr)
		sqrt++;
	if ((nbr % sqrt) == 0)
		return (sqrt);
	else
		return (0);
}
