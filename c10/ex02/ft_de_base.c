/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_de_base.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 09:59:07 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/24 10:35:55 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tail.h"

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

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int nb;

	i = 0;
	nb = 0;
	neg = 1;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58 && str[i] != '\0')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * neg);
}
