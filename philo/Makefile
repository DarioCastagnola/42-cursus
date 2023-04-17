# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 14:52:32 by dcastagn          #+#    #+#              #
#    Updated: 2023/04/17 10:09:07 by dcastagn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo
PHILO = main.c ft_atoi.c
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
