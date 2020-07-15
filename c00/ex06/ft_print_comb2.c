/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 13:26:44 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/04 13:23:52 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_print(int nbl, int nbr)
{
	if (nbl < 10)
		ft_putchar('0');
	ft_putnbr(nbl);
	ft_putchar(' ');
	if (nbr < 10)
		ft_putchar('0');
	ft_putnbr(nbr);
	if (nbl != 98 || nbr != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int nbl;
	int nbr;

	nbl = 0;
	nbr = 1;
	while (nbl < 99)
	{
		nbr = nbl + 1;
		while (nbr <= 99)
		{
			ft_print(nbl, nbr);
			nbr++;
		}
		nbl++;
	}
}
