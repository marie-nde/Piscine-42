/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 17:17:17 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/21 18:46:13 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int long n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int nb;

	i = 0;
	nb = 0;
	neg = 1;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58 && str[i] != '\0')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * neg);
}

void	ft_convert(int val1, int val2, char *op)
{
	int		(*tab[5])();

	tab[0] = &addition;
	tab[1] = &soustraction;
	tab[2] = &division;
	tab[3] = &modulo;
	tab[4] = &multiplication;
	if (op[0] == '+')
		ft_putnbr(tab[0](val1, val2));
	if (op[0] == '-')
		ft_putnbr(tab[1](val1, val2));
	if (op[0] == '/' && val2 != 0)
		ft_putnbr(tab[2](val1, val2));
	if (op[0] == '%' && val2 != 0)
		ft_putnbr(tab[3](val1, val2));
	if (op[0] == '*')
		ft_putnbr(tab[4](val1, val2));
	if (op[0] == '/' && val2 == 0)
		ft_putstr("Stop : division by zero");
	if (op[0] == '%' && val2 == 0)
		ft_putstr("Stop : modulo by zero");
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	int		val1;
	int		val2;
	char	*op;

	if (ac > 4 || ac < 4)
		return (0);
	if ((av[2][0] != '+' && av[2][0] != '-' && av[2][0] != '/'
				&& av[2][0] != '%' && av[2][0] != '*') || ft_strlen(av[2]) > 1)
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	val1 = ft_atoi(av[1]);
	val2 = ft_atoi(av[3]);
	op = av[2];
	ft_convert(val1, val2, op);
	return (0);
}
