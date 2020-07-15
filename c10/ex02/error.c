/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 09:48:22 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/24 11:04:12 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tail.h"

void	ft_missing_num(void)
{
	ft_putstr("tail: option requires an argument -- c\n");
	ft_putstr("usage: tail [-F | -f | -r] [-q] ");
	ft_putstr("[-b # | -c # | -n #] [file ...]\n");
}

int		ft_check_num(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

void	ft_not_num(char *str)
{
	ft_putstr("tail: illegal offset -- ");
	ft_putstr(str);
	ft_putchar('\n');
}
