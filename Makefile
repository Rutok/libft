NAME = libft.a 

FLG = -Wall -Wextra -Werror

SRC = *.c

all: $(NAME) fclean

$(NAME):
	gcc -c $(FLG) $(SRC)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(NAME)

fclean:
	rm -f *.o

re: clean all
