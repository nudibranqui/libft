# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 12:50:39 by aurue-lo          #+#    #+#              #
#    Updated: 2022/09/21 17:37:40 by aurue-lo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = ft_isalpha.c\
		  ft_isdigit.c\
		  ft_isalnum.c\
		  ft_isascii.c\
		  ft_bzero.c\
		  ft_isprint.c\
		  ft_memset.c\
		  ft_strlen.c\
		  ft_memcpy.c\
		  ft_memmove.c

#BSOURCES = 

#convertim els arxius .c en arxius .o
OBJECTS = $(SOURCES:.c=.o)
#BOBJECTS = $(BSOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
RM = rm -f
INCLUDE = libft.h

all:		 $(NAME)
$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS) $(INCLUDE)	


#bonus: $(OBJECTS) $(BOBJECTS)
#	ar -rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

# Creamos una regla patron. Va a definir una regla que gener un arch .o a partir de un arch .c
#  $< variable automatica sustituye %.c el nombre del input y $@ sustituye %.o, o sea, el nombre del output	

clean:
	 $(RM) $(OBJECTS) $(BOBJECTS)

fclean: clean
		$(RM) $(NAME)
# -f perque son carpetes

re: fclean all

.PHONY: all bonus clean fclean re
