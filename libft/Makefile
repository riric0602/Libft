# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 12:05:15 by rchbouki          #+#    #+#              #
#    Updated: 2022/11/16 12:46:25 by rchbouki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
HEADER = -I ./includes
OBJS = ${SRCS:.c=.o}
SRCS = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c

libft.a : ${OBJS}
	ar -rcs libft.a ${OBJS}

all : libft.a

.c.o :
	${CC} ${CFLAGS} ${HEADER} -c $< -o ${<:.c=.o}

clean :
	rm -f libft.a

fclean : clean
	rm -f libft.a

re : fclean all