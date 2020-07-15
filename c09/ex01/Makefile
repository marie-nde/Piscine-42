# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnaude <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/18 12:02:13 by mnaude            #+#    #+#              #
#    Updated: 2019/07/21 10:19:15 by mnaude           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a

SRCS			=	ft_putchar.c		\
					ft_swap.c			\
					ft_putstr.c			\
					ft_strlen.c			\
					ft_strcmp.c

PATH_HEAD		= ./includes/

PATH_SRCS		= ./srcs/

_SRCS			= ${addprefix ${PATH_SRCS}, ${SRCS}}

OBJ				= ${_SRCS:.c=.o}

CFLAGS			= -Wall -Wextra -Werror -I${PATH_HEAD}

CC				= gcc

RM				= rm -f

all:
				@make ${NAME}

${NAME}:		${OBJ}
				ar rc ${NAME} ${OBJ}

clean:
				${RM} ${OBJ}

fclean:			clean
				${RM} ${NAME}

re:				fclean all
