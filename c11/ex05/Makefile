# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnaude <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/21 18:28:23 by mnaude            #+#    #+#              #
#    Updated: 2019/07/21 18:33:27 by mnaude           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= do-op

SRCS		= main.c	\
			  doop.c	\
			  bonus.c

OBJS		= $(SRCS:.c=.o)

CC			= gcc

CFLAGS		+= -W -Wall -ansi -pedantic -Wextra -Werror

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
