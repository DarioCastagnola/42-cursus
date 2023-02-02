# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/02 10:29:05 by dcastagn          #+#    #+#              #
#    Updated: 2023/02/02 12:16:43 by dcastagn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS =	ft_strlen.c   	 \
	    ft_putchar.c	 \
	    ft_putnbr.c 	 \
		ft_printf.c		 \
		ft_putsrc.c		 \
		ft_putstr.c		 \

FLAGS = -Wall -Wextra -Werror
CC = gcc
OBJS = $(SRCS:.c=.o)
.o:.c
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o}
$(NAME): ${OBJS}
	ar rcs $(NAME) $(OBJS)
all: $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
