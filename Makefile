# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: usuario <usuario@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 16:02:50 by pgonzal2          #+#    #+#              #
#    Updated: 2023/10/22 07:26:20 by usuario          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	ft_printf.c ft_putchar.c ft_putnbr_HEX.c ft_putnbr_x.c \
		ft_putnbr.c ft_putstr.c
CC = gcc
CFLAGS= -Wall -Werror -Wextra
OBJ = $(SRCS:.c=.o)
NAME = libftprintf.a


all: $(NAME)


$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<
	
clean: 
	rm -rf $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re