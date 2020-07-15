/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 17:17:34 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/21 18:42:30 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

# include <unistd.h>

int		addition(int val1, int val2);
int		soustraction(int val1, int val2);
int		division(int val1, int val2);
int		modulo(int val1, int val2);
int		multiplication(int val1, int val2);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

#endif
