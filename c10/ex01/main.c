/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 10:40:39 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/23 09:51:40 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_display(char *str)
{
	int		fd;
	int		ret;
	char	buf[BUFF_SIZE + 1];

	fd = open(str, O_RDONLY);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd);
}

int		main(int ac, char **av)
{
	int		i;
	int		errno;
	char	buf[BUFF_SIZE + 1];

	i = 1;
	errno = 0;
	if (ac == 1)
	{
		while (i == 1)
			ft_no_argv();
	}
	if (ac > 1)
	{
		while (i < ac)
		{
			if (open(av[i], O_RDONLY) == -1)
				ft_error(av[i]);
			else if (read(open(av[i], O_RDONLY), buf, BUFF_SIZE) == -1)
				ft_error(av[i]);
			else if (open(av[i], O_RDONLY) > 0)
				ft_display(av[i]);
			i++;
		}
	}
	return (0);
}
