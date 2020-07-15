/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 17:33:26 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/16 13:30:51 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(int size, char **strs, char *sep)
{
	int i;
	int j;
	int compt;

	i = 0;
	compt = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			compt++;
			j++;
		}
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
		{
			j++;
			compt++;
		}
		i++;
	}
	return (compt + 1);
}

char	*ft_join(char **strs, char *sep, char *str, int size)
{
	int j;
	int k;
	int index;
	int i;

	index = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[index++] = strs[i][j++];
		}
		k = 0;
		while (sep[k] != '\0' && i < size - 1)
		{
			str[index++] = sep[k++];
		}
		i++;
	}
	str[index] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *str;

	str = NULL;
	if (size < 1)
	{
		if (!(str = (char*)malloc(sizeof(char) * 1)))
			return (0);
		str[0] = '\0';
		return (str);
	}
	if (!(str = (char*)malloc(sizeof(char) * ft_strlen(size, strs, sep))))
		return (0);
	str = ft_join(strs, sep, str, size);
	return (str);
}
