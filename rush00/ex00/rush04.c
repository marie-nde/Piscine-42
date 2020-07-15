/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 10:40:46 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/06 11:55:20 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_len(int width, int length)
{
	int i;
	int j;

	i = 0;
	while (i++ < length - 2 && width > 0 && length > 2)
	{
		j = 0;
		ft_putchar('B');
		while (j++ < width - 2)
			ft_putchar(' ');
		if (width > 1)
			ft_putchar('B');
		ft_putchar('\n');
	}
}

void	rush(int width, int length)
{
	int i;

	i = 0;
	if (width > 0 && length > 0)
		ft_putchar('A');
	while (i++ < width - 2)
		ft_putchar('B');
	if (width > 1)
		ft_putchar('C');
	ft_putchar('\n');
	i = 0;
	ft_len(width, length);
	if (width > 0 && length > 1)
		ft_putchar('C');
	while (i++ < width - 2 && length > 1)
		ft_putchar('B');
	if (width > 1 && length > 1)
		ft_putchar('A');
	if (width > 0 && length > 1)
		ft_putchar('\n');
}
