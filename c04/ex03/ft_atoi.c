/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 15:03:43 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/09 13:38:09 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_convert(char *str, int i, int nb)
{
	while (str[i] > 47 && str[i] < 58 && str[i] != '\0')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb);
}

int		ft_atoi(char *str)
{
	int i;
	int compt;
	int nb;

	i = 0;
	nb = 0;
	compt = 0;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			compt++;
		i++;
	}
	nb = ft_convert(str, i, nb);
	if (compt % 2 == 1)
		nb = nb * -1;
	return (nb);
}
