# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnaude <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/24 11:05:00 by mnaude            #+#    #+#              #
#    Updated: 2019/07/24 11:30:26 by mnaude           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_tail

SRCS		= main.c	\
			  error.c	\
			  print.c	\
			  ft_de_base.c

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
