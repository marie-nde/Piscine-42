/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 18:42:52 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/04 19:59:45 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *tab, int i)
{
	int swap;

	swap = tab[i];
	tab[i] = tab[i + 1];
	tab[i + 1] = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	size--;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(tab, i);
			i = -1;
		}
		i++;
	}
}
