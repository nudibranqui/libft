# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aurue-lo <aurue-lo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 12:50:39 by aurue-lo          #+#    #+#              #
#    Updated: 2023/06/12 15:09:40 by aurue-lo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#								#Variables#                                    #
################################################################################
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
RM = rm -f
################################################################################
#								#Sources#									   #
################################################################################
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
		  ft_bzero.c ft_isprint.c ft_memset.c ft_strlen.c\
		  ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
		  ft_toupper.c ft_tolower.c ft_strchr.c ft_strncmp.c\
		  ft_strrchr.c ft_memchr.c ft_memcmp.c ft_atoi.c\
		  ft_calloc.c ft_substr.c ft_strdup.c ft_strjoin.c\
		  ft_putchar_fd.c ft_strtrim.c ft_putstr_fd.c ft_putendl_fd.c\
		  ft_putnbr_fd.c ft_split.c ft_itoa.c ft_strmapi.c\
		  ft_striteri.c ft_strnstr.c\
		  ft_putchar.c ft_putnbr.c ft_putptr.c ft_putstr.c\
		  ft_printf.c
################################################################################
#								#Directories#                                  #
################################################################################
D_OBJ = obj
OBJ = $(addprefix $(D_OBJ)/, $(SRC:.c=.o))#convertim els arxius .c en arxius .o
DEP = $(addprefix $(D_OBJ)/, $(SRC:.c=.d))
################################################################################
#								#Colors and  fonts#                            #
################################################################################
E = \033[m
R = \033[31m
G = \033[32m
Y = \033[33m
B = \033[34m
P = \033[35m
C = \033[36m
ligth = \033[1m
dark = \033[2m
italic = \033[3m
################################################################################
#								#Make rules#                                   #
################################################################################
all: dir $(NAME)
-include $(DEP)
dir:
	-mkdir $(D_OBJ)
$(D_OBJ)/%.o: %.c
	$(CC) -MMD $(CFLAGS) -c $< -o $@
	printf "$(B)\rCompiling: $(P)$(notdir $<)...			$(E)\r"
$(NAME):	$(OBJ)
	$(AR) $(NAME) $(OBJ)
	touch $(NAME)
	printf "$(B)$(ligth)Project libft compiled!$(E)"
# Creamos una regla patron. Va a definir una regla que gener un arch .o a partir de un arch .c
#  $< variable automatica sustituye %.c el nombre del input y $@ sustituye %.o, o sea, el nombre del output	
.PHONY: all bonus clean fclean re
fclean: clean
		$(RM) $(NAME)
clean:
	 $(RM) $(OBJ)
# -f perque son carpetes
re: fclean all
.SILENT:
