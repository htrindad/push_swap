NAME = push_swap
M = ./moves
SRC = $(M)/swap.c $(M)/push.c $(M)/rotate.c $(M)/rrotate.c main.c ps_init.c small_sort.c turk.c init_map.c rot_map.c segregate.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra -O3
PSLIB_DIR = ./libs/pslib
PSLIB = $(PSLIB_DIR)/pslib.a
GET_NEXT_LINE_DIR = ./libs/get_next_line
GET_NEXT_LINE = $(GET_NEXT_LINE_DIR)/get_next_line.a
B_DIR = ./bonus
B_SRC = $(B_DIR)/main.c

all: $(NAME)

$(NAME): $(PSLIB) $(OBJ)
	cc $(CFLAGS) $(OBJ) $(PSLIB) -o $(NAME)

$(PSLIB):
	make -s -C $(PSLIB_DIR)

$(GET_NEXT_LINE):
	make -s -C $(GET_NEXT_LINE_DIR)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(PSLIB_DIR)

re: fclean all
