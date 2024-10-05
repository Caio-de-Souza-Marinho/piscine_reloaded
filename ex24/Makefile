# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caide-so <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/03 19:12:36 by caide-so          #+#    #+#              #
#    Updated: 2024/10/03 20:37:36 by caide-so         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDES = ./includes

FLAGS = -Wall -Wextra -Werror

SRCS =	srcs/ft_putchar.c \
	srcs/ft_putstr.c \
	srcs/ft_strcmp.c \
	srcs/ft_strlen.c \
	srcs/ft_swap.c

OBJS =	ft_putchar.o \
	ft_putstr.o \
	ft_strcmp.o \
	ft_strlen.o \
	ft_swap.o

all: ${NAME}

${NAME}:
	cc ${FLAGS} -c ${SRCS} -I ${INCLUDES} 
	ar rcs ${NAME} ${OBJS}
 
clean:
	rm -rf ${OBJS}

fclean:	clean
	rm -rf ${NAME}

re: fclean all
