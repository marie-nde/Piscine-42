/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 17:51:27 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/09 13:21:33 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if ((base[i] > 0 && base[i] < 48) || (base[i] > 57 && base[i] < 65)
				|| (base[i] > 90 && base[i] < 97) || base[i] > 122)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_strlen(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base2(long int nb, char *base)
{
	long int len;
	long int nbr;

	len = ft_strlen(base);
	nbr = nb;
	if (ft_check(base) == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = nbr * -1;
		}
		if (nbr >= len)
			ft_putnbr_base2(nbr / len, base);
		ft_putchar(base[nbr % len]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	ft_putnbr_base2(nbr, base);
}
