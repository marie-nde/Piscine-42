/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 11:52:54 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/22 16:42:36 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int croiss;

	i = 0;
	croiss = 1;
	if (length == 0)
		return (1);
	if (tab[i] > tab[length - 1])
		croiss = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0 && croiss == 0)
			return (0);
		if ((*f)(tab[i], tab[i + 1]) > 0 && croiss == 1)
			return (0);
		i++;
	}
	return (1);
}
