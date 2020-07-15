/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:33:32 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/13 19:35:55 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
				|| (base[i] > 8 && base[i] < 14))
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	ft_get_value(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_check_value(char *base, char c)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int nb;
	int neg;

	i = 0;
	nb = 0;
	neg = 1;
	if (ft_check(base) == 1)
	{
		while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				neg = neg * -1;
			i++;
		}
		while (str[i] != '\0' && ft_check_value(base, str[i]) == 1)
		{
			nb = nb * ft_strlen(base) + (ft_get_value(str[i], base));
			i++;
		}
		nb = nb * neg;
	}
	return (nb);
}
