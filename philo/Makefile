# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 14:52:32 by dcastagn          #+#    #+#              #
#    Updated: 2023/04/14 15:55:03 by dcastagn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo
PHILO = main.c
OBJ = ${PHILO:.c=.o}
CC = gcc
FLAGS = -Wall -Wextra -Werror -pthread
RM = rm -f

.o:.c
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}:
	${CC} ${FLAGS} ${PHILO} -o ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all
