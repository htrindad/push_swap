NAME = pslib.a

SRC = ps_atol.c ps_split.c ps_stacknew.c ps_strdup.c ps_strlen.c ps_substr.c ps_stacklen.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar -src $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
