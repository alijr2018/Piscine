# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abrami <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/13 17:15:53 by abrami            #+#    #+#              #
#    Updated: 2024/08/15 13:38:26 by abrami           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/ft_putchar.c  srcs/ft_swap.c  srcs/ft_putstr.c  srcs/ft_strlen.c  srcs/ft_strcmp.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RMF = rm -fr
OBJS = $(SRCS:.c=.o)

%.o: %.c
	${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

$(NAME) : ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

all:	${NAME}


