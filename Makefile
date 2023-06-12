# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 12:50:39 by aurue-lo          #+#    #+#              #
#    Updated: 2022/12/11 13:35:38 by aurue-lo         ###   ########.fr        #
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
		  ft_memmove.c\
		  ft_strlcpy.c\
		  ft_strlcat.c\
		  ft_toupper.c\
		  ft_tolower.c\
		  ft_strchr.c\
		  ft_strncmp.c\
		  ft_strrchr.c\
		  ft_memchr.c\
		  ft_memcmp.c\
		  ft_atoi.c\
		  ft_calloc.c\
		  ft_substr.c\
		  ft_strdup.c\
		  ft_strjoin.c\
		  ft_putchar_fd.c\
		  ft_strtrim.c\
		  ft_putstr_fd.c\
		  ft_putendl_fd.c\
		  ft_putnbr_fd.c\
		  ft_split.c\
		  ft_itoa.c\
		  ft_strmapi.c\
		  ft_striteri.c\
		  ft_strnstr.c



#BSOURCES = 

#convertim els arxius .c en arxius .o
OBJECTS = $(SOURCES:.c=.o)
#BOBJECTS = $(BSOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
RM = rm -f
INCLUDE = -I ./
HEADER = libft.h

all:		 $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJECTS) $(HEADER)
	$(AR) $(NAME) $(OBJECTS)

#bonus: $(OBJECTS) $(BOBJECTS)
#	ar -rcs $(NAME) $(OBJECTS)

# Creamos una regla patron. Va a definir una regla que gener un arch .o a partir de un arch .c
#  $< variable automatica sustituye %.c el nombre del input y $@ sustituye %.o, o sea, el nombre del output	

clean:
	 $(RM) $(OBJECTS) $(BOBJECTS)

fclean: clean
		$(RM) $(NAME)
# -f perque son carpetes

re: fclean all

.PHONY: all bonus clean fclean re
