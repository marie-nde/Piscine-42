# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnaude <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 16:10:20 by mnaude            #+#    #+#              #
#    Updated: 2019/07/23 09:48:15 by mnaude           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_cat

SRCS		= main.c	\
			  error.c

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
