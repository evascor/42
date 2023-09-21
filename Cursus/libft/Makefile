# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evasco-o <evasco-o@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 11:33:30 by evasco-o          #+#    #+#              #
#    Updated: 2023/09/21 17:20:51 by evasco-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -Wall -Werror -Wextra
# $(NAME), all, clean, fclean, re

# Para bonusfiles: regla bonus, añadir todos los headers, librerias o funciones prohibidas en la parte principal del proyecto.

SRCS = ft_isalpha.c

OBJS = $(SRCS:.c=.o)

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
