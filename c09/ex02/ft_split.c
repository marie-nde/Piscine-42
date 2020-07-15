/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 11:15:33 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/19 11:29:04 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_length(char *str, char *charset)
{
	int i;
	int compt;

	i = 0;
	compt = 0;
	if (ft_is_charset(str[i], charset) == 0)
	{
		i++;
		compt++;
	}
	while (str[i])
	{
		if (ft_is_charset(str[i], charset) == 0
				&& ft_is_charset(str[i - 1], charset) == 1)
			compt++;
		i++;
	}
	return (compt);
}

int		ft_count_word(char *str, char *charset)
{
	int compt;
	int i;

	i = 0;
	compt = 0;
	while (str[i] && ft_is_charset(str[i], charset) == 1)
		i++;
	while (str[i] && ft_is_charset(str[i], charset) == 0)
	{
		i++;
		compt++;
	}
	return (compt);
}

char	**ft_while(char *str, char *charset, char *tab, char **retour)
{
	int j;
	int i;
	int k;
	int counter;

	i = 0;
	k = 0;
	counter = 0;
	while (counter < ft_length(str, charset))
	{
		j = 0;
		if (!(tab = (char*)malloc(sizeof(char) *
						ft_count_word(str + i, charset) + 1)))
			return (0);
		while (str[i] && ft_is_charset(str[i], charset) == 1)
			i++;
		while (str[i] && ft_is_charset(str[i], charset) == 0)
			tab[j++] = str[i++];
		tab[j] = '\0';
		retour[k++] = tab;
		counter++;
	}
	retour[k] = 0;
	return (retour);
}

char	**ft_split(char *str, char *charset)
{
	char	**retour;
	char	*tab;
	int		i;

	retour = NULL;
	tab = NULL;
	i = 0;
	if (str[i] == '\0')
	{
		if (!(retour = (char**)malloc(sizeof(char*) * 1)))
			return (NULL);
		retour[i] = 0;
		return (retour);
	}
	if (!(retour = (char**)malloc(sizeof(char*) * ft_length(str, charset) + 1)))
		return (0);
	retour = ft_while(str, charset, tab, retour);
	return (retour);
}
