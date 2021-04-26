NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_*.c

OBJ = $(SRC:.c=.o)

$(NAME):
		gcc $(FLAGS) -c $(SRC) libft.h
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

all: $(NAME)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all