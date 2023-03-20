# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/13 12:51:50 by dcastagn          #+#    #+#              #
#    Updated: 2023/03/20 16:32:57 by dcastagn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = ./libft

LIBFT_LIB = libft.a

SRCS = main.c	\
		utils.c    \
		move_r.c \
		move_rr.c \
		move_s.c  \

OBJS	= $(SRCS:.c=.o)
RM		= rm -f
LIBC	= ar -rcs
CC		= gcc
DEBUG	= gcc -g
LEAKS   = gcc -g -fsanitize=address
FLAGS	= -Wall -Wextra -Werror
INCS	= ./

all: $(NAME)

%.o: %.c
	$(CC) -Wall -Wextra -Werror -c $< -o $@


$(NAME): $(OBJS)
	make -C $(LIBFT)
	$(CC) $(LIBFT)/$(LIBFT_LIB) $(OBJS) -o $(NAME)

fclean: clean
	$(RM) $(NAME) $(LIBFT)/$(LIBFT_LIB)

clean:
	$(RM) $(OBJS)
	make clean -C $(LIBFT)

re: fclean all
