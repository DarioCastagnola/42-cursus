# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 10:51:32 by dcastagn          #+#    #+#              #
#    Updated: 2023/01/18 11:00:00 by dcastagn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalnum.c  \
	   ft_isadigit.c \
	   ft_isalpha.c  \
	   ft_isprint.c  \
	   ft_strlen.c   \
	   ft_toupper.c  \
	   ft_tolower.c  \

FLAGS = -Wall -Wextra -Werror
CC = gcc
OBJS = $(SRCS:.c=.o)
$(NAME):
	$(CC) -c $(FLAGS) $(SRCS) ar rcs $(NAME) $(OBJS) rm *.o
all: $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
