# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnaude <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/20 09:29:36 by mnaude            #+#    #+#              #
#    Updated: 2019/07/22 18:24:33 by mnaude           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_display_file

SRCS		=  main.c                \
			ft_display_file.c

OBJS		= $(SRCS:.c=.o)

CC			= gcc

CFLAGS		= -W -Wall -ansi -pedantic -Wextra -Werror

RM			= rm -f

all:	
			@make $(NAME)

$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
