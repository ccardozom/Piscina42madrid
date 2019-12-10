/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:07:23 by ccardozo          #+#    #+#             */
/*   Updated: 2019/09/12 17:40:24 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

int main()
{
	int x = 5;
	int y = 10;
	printf("x = %d y = %d",x,y);
	ft_swap(&x,&y);

	printf("\nx = %d y = %d",x,y);
}
