NAME = push_swap

SRC = ./moves/swap.c ./moves/rotate.c ./moves/push.c ./moves/rrotate.c

CFLAGS = -Wall -Werror -Wextra

PSLIB_PATH = ./libs/pslib
PSLIB = $(PSLIB_PATH)/pslib.a

$OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(PSLIB) $(OBJ)
	cc $(CFLAGS) $(OBJ) $(PSLIB) -o $(NAME)

$(PSLIB):
	make -s -C $(PSLIB_PATH)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(PSLIB_PATH)

re: fclean all
