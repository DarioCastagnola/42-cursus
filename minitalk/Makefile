# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/13 12:51:50 by dcastagn          #+#    #+#              #
#    Updated: 2023/04/14 11:27:26 by dcastagn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_SERVER = server
NAME_CLIENT = client
SERVER_DIR = ./dirserver
CLIENT_DIR = ./dirclient
SERVER = ${SERVER_DIR}/server.c
CLIENT = ${CLIENT_DIR}/client.c
SERVER_B = ${SERVER_DIR}/server_bonus.c
CLIENT_B = ${CLIENT_DIR}/client_bonus.c
SERVER_OBJ = ${SERVER:.c=.o}
CLIENT_OBJ = ${CLIENT:.c=.o}
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -f

.o:.c
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

all: lib ${NAME_SERVER} ${NAME_CLIENT}

bonus: lib
	${CC} ${FLAGS} ${SERVER_B} ./ft_printf/libftprintf.a -o ${NAME_SERVER}
	${CC} ${FLAGS} ${CLIENT_B} ./ft_printf/libftprintf.a -o ${NAME_CLIENT}

lib:
	make -C ./ft_printf

${NAME_SERVER}:
	${CC} ${FLAGS} ${SERVER} ./ft_printf/libftprintf.a -o ${NAME_SERVER}

${NAME_CLIENT}:
	${CC} ${FLAGS} ${CLIENT} ./ft_printf/libftprintf.a -o ${NAME_CLIENT}

clean:
	make clean -C ./ft_printf
	${RM} ${SERVER_OBJ} ${CLIENT_OBJ}

fclean: clean
	make fclean -C ./ft_printf
	${RM} ${NAME_SERVER} ${NAME_CLIENT}

re: fclean all
