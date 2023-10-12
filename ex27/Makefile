# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marykman <marykman@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 20:11:42 by marykman          #+#    #+#              #
#    Updated: 2023/10/12 20:17:50 by marykman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	ft_display_file

INCLUDE	=	-I./includes

SRCS	=	main.c \
			ft_display_file.c \
			ft_putstr_fd.c \
			ft_strlen.c \
			ft_error.c
OBJS	=	$(addprefix srcs/, ${SRCS:.c=.o})

%.o:		%.c
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@

$(NAME):	${OBJS}
	${CC} ${CFLAGS} ${INCLUDE} $^ -o $@

all:		${NAME}

clean:
	rm -rf ${OBJS}

fclean:		clean
	rm -rf ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
