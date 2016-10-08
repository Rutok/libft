#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/10/08 14:14:58 by nboste            #+#    #+#             *#
#*   Updated: 2016/10/08 18:42:18 by nboste           ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = libft.a 
CC = gcc $(FLG)
FLG = -Wall -Wextra -Werror
SRC = ft_atoi.c \
	ft_bzero.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memalloc.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memdel.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar.c \
	ft_putchar_fd.c \
	ft_putendl.c \
	ft_putendl_fd.c \
	ft_putnbr.c \
	ft_putnbr_fd.c \
	ft_putstr.c \
	ft_putstr_fd.c \
	ft_strcat.c \
	ft_strchr.c \
	ft_strclr.c \
	ft_strcmp.c \
	ft_strcpy.c \
	ft_strdel.c \
	ft_strdup.c \
	ft_strequ.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strmap.c \
	ft_strmapi.c \
	ft_strncat.c \
	ft_strncmp.c \
	ft_strncpy.c \
	ft_strnequ.c \
	ft_strnew.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strrev.c \
	ft_strsplit.c \
	ft_strstr.c \
	ft_strsub.c \
	ft_strtrim.c \
	ft_tolower.c \
	ft_toupper.c 
OBJ = $(SRC:%.c=obj/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	if ar rc $@ $^ ; then \
		echo "Linking" [ $(C_WARN)$(NAME)$(C_NO) ] [ $(SUCCESS) ] ; \
	else \
		echo "Linking" [ $(C_WARN)$(NAME)$(C_NO) ] [ $(FAILURE) ] ; \
	fi
	if ranlib $@ ; then \
		echo "Indexing" [ $(C_WARN)$(NAME)$(C_NO) ] [ $(SUCCESS) ] ; \
	else \
		echo "Indexing" [ $(C_WARN)$(NAME)$(C_NO) ] [ $(FAILURE) ] ; \
	fi

obj/%.o: %.c 
	mkdir -p obj
	if $(CC) -c -o $@ $< ; then \
		echo "Compiling" [ $(C_WARN)$<$(C_NO) ] [ $(OK) ] ; \
	else \
		echo "Compiling" [ $(C_WARN)$<$(C_NO) ] [ $(FAILURE) ] ; \
	fi

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all

.SILENT: clean fclean all $(NAME) $(OBJ)

# COLORS
C_NO	=	"\033[00m"
C_OK	=	"\033[35m"
C_GOOD	=	"\033[32m"
C_ERROR	=	"\033[31m"
C_WARN	=	"\033[33m"

# DBG MESSAGE
SUCCESS	=	$(C_GOOD)SUCCESS$(C_NO)
OK	= $(C_OK)OK$(C_NO)
FAILURE = $(C_ERROR)FAILURE$(C_NO)
