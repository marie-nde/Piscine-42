/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 18:22:48 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/23 09:58:12 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.h"

void	ft_error(char *str)
{
	ft_putstr("cat: ");
	ft_putstr(str);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
}

void	ft_no_argv(void)
{
	int		fd;
	int		ret;
	char	buf[BUFF_SIZE + 1];

	fd = 0;
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}
