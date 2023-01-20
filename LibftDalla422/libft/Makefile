# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 10:51:32 by dcastagn          #+#    #+#              #
#    Updated: 2023/01/20 11:57:52 by dcastagn         ###   ########.fr        #
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
	   ft_atoi.c     \
	   ft_memset.c   \
	   ft_strrchr.c  \
	   ft_strlcat.c  \
	   ft_strncmp.c  \
	   ft_memmove.c  \
	   ft_memcmp.c   \
	   ft_bzero.c    \
	   ft_isascii.c  \
	   ft_strchr.c   \
	   ft_memcpy.c   \

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
