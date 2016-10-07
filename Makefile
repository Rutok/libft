NAME = libft.a 

FLG = -Wall -Wextra -Werror

SRC =	ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strcat.c \
		ft_strchr.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_strncat.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_tolower.c \
		ft_toupper.c

all: $(NAME)

$(NAME):
	gcc -c $(FLG) $(SRC)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(NAME)

fclean:
	rm -f *.o

re: clean all
