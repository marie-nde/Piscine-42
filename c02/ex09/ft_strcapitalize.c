/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 14:43:53 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/21 15:12:57 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[i] > 96 && str[i] < 123)
		str[i] -= 32;
	i++;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i - 1] < 48 || str[i - 1] > 122 || (str[i - 1] > 90 &&
						str[i - 1] < 97) || (str[i - 1] > 57 &&
							str[i - 1] < 65)) && str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		i++;
	}
	return (str);
}
