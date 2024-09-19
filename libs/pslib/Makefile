NAME = pslib.a

SRC = ps_strlen.c ps_atol.c ps_strdup.c ps_substr.c ps_split.c ps_stackcreate.c ps_strncmp.c ps_stackaddback.c ps_stacklast.c ps_strncmp.c ps_quiterror.c \
      ps_freestack.c ps_freematrix.c

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
