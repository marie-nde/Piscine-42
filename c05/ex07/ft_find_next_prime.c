/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 18:20:22 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/10 16:14:45 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_prime(int nb)
{
	int i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	if (nb < 2)
		return (2);
	while (ft_prime(i) != 1)
	{
		i++;
	}
	return (i);
}
