# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evasco-o <evasco-o@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 13:25:28 by evasco-o          #+#    #+#              #
#    Updated: 2023/10/03 15:30:14 by evasco-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# -Wall(muestra advertencias) -Werror(advertencias=>errores) -Wextra(mostrar
#  advertencias adicionales)
# $(NAME), all, clean, fclean, re

# Para bonusfiles: regla bonus, añadir todos los headers, librerias o funciones
# prohibidas en la parte principal del proyecto.

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	   ft_strlen.c ft_memset.c ft_toupper.c ft_tolower.c ft_strchr.c\
	   ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c\
	   ft_atoi.c ft_memcpy.c ft_memcmp.c ft_memmove.c ft_strdup.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CCFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = libft.a
INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDE)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
