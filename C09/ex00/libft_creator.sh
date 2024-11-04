# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abrami <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/16 07:44:39 by abrami            #+#    #+#              #
#    Updated: 2024/08/16 07:49:06 by abrami           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

gcc -c ft_putchar.c -o ft_putchar.o
gcc -c ft_putstr.c -o ft_putstr.o
gcc -c ft_strcmp.c -o ft_strcmp.o
gcc -c ft_strlen.c -o ft_strlen.o
gcc -c ft_swap.c -o ft_swap.o

ar rcs libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
find . -name "*.o" -type f -delete
