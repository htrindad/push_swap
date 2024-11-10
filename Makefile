NAME = push_swap

M = ./moves

SRC = main.c $(M)/swap.c $(M)/push.c $(M)/rotate.c $(M)/rrotate.c ps_init.c small_sort.c ending.c get_vals.c turk.c \
      stack_reset.c node_map.c cem.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra -O2

PSLIB_DIR = ./libs/pslib
PSLIB = $(PSLIB_DIR)/pslib.a

all: $(NAME)

$(NAME): $(PSLIB) $(OBJ)
	cc $(CFLAGS) $(OBJ) $(PSLIB) -o $(NAME)

$(PSLIB):
	make -s -C $(PSLIB_DIR)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(PSLIB_DIR)

re: fclean all
