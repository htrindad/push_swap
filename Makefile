NAME = push_swap

M = ./moves

SRC = main.c $(M)/swap.c $(M)/push.c $(M)/rotate.c $(M)/rrotate.c ps_init.c small_sort.c ending.c get_vals.c move_a_to_b.c \
      move_b_to_a.c pfp.c set_target.c turk.c mot.c cost_analysis.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra -g

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
