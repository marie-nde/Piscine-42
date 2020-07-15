/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 10:39:58 by mnaude            #+#    #+#             */
/*   Updated: 2019/07/23 09:58:37 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>
# include <stdio.h>
# include <string.h>

void	ft_error(char *str);
void	ft_putstr(char *str);
void	ft_no_argv(void);

# define BUFF_SIZE 4096

#endif
