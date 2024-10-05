# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caide-so <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 18:56:32 by caide-so          #+#    #+#              #
#    Updated: 2024/10/04 20:52:06 by caide-so         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ft_display_file.c
FLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}:
	cc -c ${FLAGS} ${SRC}
	cc -o ${NAME} ft_display_file.o

clean:
	rm -f ft_display_file.o

fclean: clean
	rm -f ${NAME}

re: fclean all
