# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marykman <marykman@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 20:11:42 by marykman          #+#    #+#              #
#    Updated: 2023/10/12 19:34:14 by marykman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libft.a

INCLUDE	=	-I./includes

SRCS	=	ft_putchar.c \
			ft_putstr.c \
			ft_strcmp.c \
			ft_strlen.c \
			ft_swap.c
OBJS	=	$(addprefix srcs/, ${SRCS:.c=.o})

%.o:		%.c
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@

$(NAME):	${OBJS}
	ar -rcs $@ $^

all:		${NAME}

clean:
	rm -rf ${OBJS}

fclean:		clean
	rm -rf ${NAME}

re:			fclean re

.PHONY:		all clean fclean re
