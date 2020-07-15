/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 11:26:23 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/17 09:59:36 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;
	int *tab;

	i = 0;
	size = max - min;
	tab = NULL;
	if (max <= min)
	{
		*range = tab;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * size);
	if (tab == NULL)
	{
		*range = tab;
		return (-1);
	}
	while (min < max)
		tab[i++] = min++;
	*range = tab;
	return (size);
}
