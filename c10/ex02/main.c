/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 09:47:09 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/24 11:17:23 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tail.h"

int		main(int ac, char **av)
{
	int		i;
	char	buf[BUFF_SIZE];

	if (ac == 2)
		ft_missing_num();
	else if (ac == 3 && ft_check_num(av[2]) == 0)
		ft_not_num(av[2]);
	else if (ac > 3 && ft_check_num(av[2]) == 1)
	{
		i = 3;
		while (i < ac)
		{
			if (ac > 4)
			{
				ft_putstr("==> ");
				ft_putstr(av[i]);
				ft_putstr(" <==\n");
			}
			if (read(open(av[i], O_RDONLY), buf, BUFF_SIZE) > 0)
				ft_print(av[i], ft_atoi(av[2]));
			if (i != ac - 1)
				ft_putchar('\n');
			i++;
		}
	}
}
