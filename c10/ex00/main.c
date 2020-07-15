/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 09:45:06 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/23 09:45:34 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_display_file(char *str);

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

int		main(int ac, char **av)
{
	if (ac == 1)
		ft_putstr("File name missing.\n");
	else if (ac > 2)
		ft_putstr("Too many arguments.\n");
	else if (open(av[1], O_RDONLY) == -1)
		ft_putstr("Cannot read file.\n");
	else if (ac == 2)
		ft_display_file(av[1]);
	return (0);
}
