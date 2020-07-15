/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 09:35:12 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/16 14:18:15 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
int		ft_strlen(char *str);
int		ft_check(char *base);

char	*ft_str_zero(char *str, char *base_to)
{
	str[0] = base_to[0];
	str[1] = '\0';
	return (str);
}

int		ft_len(long nb, char *base)
{
	int i;
	int len_base;

	i = 0;
	if (nb < 0)
		nb *= -1;
	len_base = ft_strlen(base);
	while (nb > 0)
	{
		nb /= len_base;
		i++;
	}
	return (i);
}

char	*ft_convert(char *nbr, char *base_from, char *base_to)
{
	int		i;
	long	nb;
	char	*str;

	nb = ft_atoi_base(nbr, base_from);
	if (!(str = (char*)malloc(sizeof(char) * ft_len(nb, base_to) + 2)))
		return (NULL);
	if (nb < 0)
		str[ft_len(nb, base_to) + 1] = '\0';
	else if (nb > 0)
		str[ft_len(nb, base_to)] = '\0';
	i = (nb > 0) ? ft_len(nb, base_to) - 1 : ft_len(nb, base_to);
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		return (ft_str_zero(str, base_to));
	while (nb > 0)
	{
		str[i--] = base_to[nb % ft_strlen(base_to)];
		nb /= ft_strlen(base_to);
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (!nbr || !base_from || !base_to || !ft_check(base_from)
			|| !ft_check(base_to))
		return (NULL);
	return (ft_convert(nbr, base_from, base_to));
}
