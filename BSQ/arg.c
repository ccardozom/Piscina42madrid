/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:36:32 by jbaringo          #+#    #+#             */
/*   Updated: 2019/09/24 16:07:22 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	*fill(char *mapa, int fd, int t);
char	*readfile(int fd, char *mapa, char **argv);
void	ft_putchar(char *c);

char		*arg2(char *mapa, char **argv)
{
	int	fd;

	fd = open(argv[1], O_RDONLY);
	if (fd >= 0)
	{
		mapa = readfile(fd, mapa, argv);
		return (mapa);
	}
	else
	{
		ft_putchar("DICT ERROR");
		return ("A");
	}
}

char	*readfile(int fd, char *mapa, char **argv)
{
	char	t;
	int		c;
	int		f2;

	t = 0;
	c = 0;
	f2 = fd;
	while (read(fd, &t, 1))
		c++;
	mapa = malloc(c * sizeof(*mapa));
	close(fd);
	fd = open(argv[1], O_RDONLY);
	mapa = fill(mapa, fd, t);
	free(mapa);
	return (mapa);
}

char	*fill(char *mapa, int fd, int t)
{
	int c;

	c = 0;
	while (read(fd, &t, 1))
	{
		mapa[c] = t;
		c++;
	}
	return (mapa);
}

int	error(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putchar("Error 0 parámetros");
		return (0);
	}
	else if (argv[1][0] == '\0')
	{
		ft_putchar("Error parámetro vacío");
		return (0);
	}
	else
		return (1);
}

void	ft_putchar(char *c)
{
	int i;

	i = 0;
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
