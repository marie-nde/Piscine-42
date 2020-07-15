/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 10:46:14 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/24 10:47:42 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tail.h"

void	ft_print(char *str, int nb)
{
	int		fd;
	int		compt;
	int		ret;
	char	buf[BUFF_SIZE + 1];

	compt = 0;
	fd = open(str, O_RDONLY);
	while ((ret = read(fd, buf, 1)))
	{
		buf[ret] = '\0';
		compt++;
	}
	close(fd);
	fd = open(str, O_RDONLY);
	read(fd, buf, compt - nb);
	while ((ret = read(fd, buf, nb)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd);
}
