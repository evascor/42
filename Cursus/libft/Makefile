# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evasco-o <evasco-o@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 13:25:28 by evasco-o          #+#    #+#              #
#    Updated: 2023/09/23 16:33:49 by evasco-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# -Wall(muestra advertencias) -Werror(advertencias=>errores) -Wextra(mostrar
#  advertencias adicionales)
# $(NAME), all, clean, fclean, re

# Para bonusfiles: regla bonus, añadir todos los headers, librerias o funciones
# prohibidas en la parte principal del proyecto.
SRCS = ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c\
	   ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c\
	   ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
	   ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c
OBJS = $(SRCS:.c=.o)
CC = gcc
RM = rm -f
CCFLAGS = -Wall -Wextra -Werror
NAME = libft.a
INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re