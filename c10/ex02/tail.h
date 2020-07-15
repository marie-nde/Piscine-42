/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 11:35:15 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/24 11:35:20 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

fndef TAIL_H
# define TAIL_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_missing_num();
int		ft_check_num(char *str);
void	ft_not_num(char *str);
void	ft_print(char *str, int nb);

# define BUFF_SIZE	4096

#endif
