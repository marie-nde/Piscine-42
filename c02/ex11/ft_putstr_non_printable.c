/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 15:57:21 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/21 17:02:32 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(char c)
{
	char *base;

	base = "0123456789abcdef";
	if (c >= 0)
	{
		ft_putchar(base[c / 16]);
		ft_putchar(base[c % 16]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			ft_print_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
