NAME = libft.a 

FLG = -Wall -Wextra -Werror

SRC = ft_memset.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_bzero.c \
	  ft_memchr.c \
	  ft_memcmp.c \

all: $(NAME)

$(NAME):
		gcc -c $(FLG) $(SRC)
		ar rcs $(NAME) $(OBJ)

clean:
		rm -f $(NAME)

fclean:
		rm -f *.o

re: clean all
