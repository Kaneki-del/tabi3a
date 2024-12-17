# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sait-nac <sait-nac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/17 15:58:22 by sait-nac          #+#    #+#              #
#    Updated: 2024/12/17 15:58:23 by sait-nac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c ft_printf_utils.c

OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra
INCLUDE = ft_printf.h

CC = cc
AR = ar -rcs 

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME) 

re: fclean $(NAME)

.PHONY: clean
