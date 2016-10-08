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
	ft_toupper.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@if ar rc $@ $^ ; then \
		echo "Linking" [ $(NAME) ] [ $(SUCCESS) ] ; \
	else \
		echo "Linking" [ $(NAME) ] [ $(FAILURE) ] ; \
	fi
	@if ranlib $@ ; then \
		echo "Indexing" [ $(NAME) ] [ $(SUCCESS) ] ; \
	else \
		echo "Indexing" [ $(NAME) ] [ $(FAILURE) ] ; \
	fi

%.o: %.c 
	@if $(CC) -c -o $@ $< ; then \
		echo "Compiling" [ $< ] [ $(OK) ] ; \
	else \
		echo "Compiling" [ $< ] [ $(FAILURE) ] ; \
	fi

clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(OBJ)

re: clean all

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
