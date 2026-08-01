NAME = push_swap
M = ./moves
SRC = $(M)/swap.c $(M)/push.c $(M)/rotate.c $(M)/rrotate.c ps_init.c small_sort.c turk.c init_map.c rot_map.c segregate.c
MAIN = main.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra -O3
PSLIB_DIR = ./libs/pslib
PSLIB = $(PSLIB_DIR)/pslib.a
GET_NEXT_LINE_DIR = ./libs/get_next_line
GET_NEXT_LINE = $(GET_NEXT_LINE_DIR)/get_next_line.a
B_DIR = ./bonus
B_SRC = $(B_DIR)/free_all.c $(B_DIR)/nv_push.c $(B_DIR)/nv_rotate.c $(B_DIR)/nv_rrotate.c $(B_DIR)/nv_swap.c
B_OBJ = $(B_SRC:.c=.o)
MAIN_BONUS = $(B_DIR)/main.c
BONUS = push_swap_bonus
MAIN_OBJ = $(MAIN:.c=.o)
MAIN_BOBJ = $(MAIN_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(PSLIB) $(OBJ) $(MAIN_OBJ)
	cc $(CFLAGS) $(OBJ) $(MAIN_OBJ) $(PSLIB) -o $(NAME)

$(PSLIB):
	make -s -C $(PSLIB_DIR)

$(GET_NEXT_LINE):
	make -s -C $(GET_NEXT_LINE_DIR)

clean:
	rm -f $(OBJ)
	rm -f $(MAIN_OBJ)

$(BONUS): $(GET_NEXT_LINE) $(PSLIB) $(B_OBJ) $(MAIN_BOBJ)
	cc $(CFLAGS) $(OBJ) $(B_OBJ) $(MAIN_BOBJ) $(GET_NEXT_LINE) $(PSLIB) -o $(BONUS)

bonus: all $(BONUS)

clean_bonus:
	rm -f $(B_OBJ)
	rm -f $(MAIN_BOBJ)

fclean: clean clean_bonus
	rm -f $(NAME)
	rm -f $(BONUS)
	make fclean -C $(PSLIB_DIR)
	make fclean -C $(GET_NEXT_LINE_DIR)

re: fclean all
