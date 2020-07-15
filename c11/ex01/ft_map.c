/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 11:37:26 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/22 13:47:47 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *ptr;

	i = 0;
	if (!(ptr = (int*)malloc(sizeof(int) * length)))
		return (NULL);
	while (i < length)
	{
		ptr[i] = (*f)(tab[i]);
		i++;
	}
	return (ptr);
}
