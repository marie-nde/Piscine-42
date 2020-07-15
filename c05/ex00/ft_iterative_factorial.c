/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 15:35:23 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/10 11:54:38 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if (nb == 0)
		return (1);
	while (nb >= 1)
	{
		fact = fact * nb;
		nb--;
		if (nb == 0)
			return (fact);
	}
	return (0);
}
