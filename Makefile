CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = fillit

SRCS = main.c ft_sqrt.c inc_right.c \
	piece_lookup.c search.c tetramino_templates.c \
	write_to_string.c putbox.c check_legality.c \
	copy_piece_list.c new_box.c \
	box_location_functions.c util.c match_piece.c \
	tetramino_templates_sz.c tetramino_templates_l.c \
	tetramino_templates_t.c tetramino_templates_j.c \
	pieces_arrays.c pieces2_array.c read_from_file.c \
	error_check.c pieces3_array.c

OBJ = $(SRCS:.c=.o)

LIBS = libft/libft.a

.PHONY: all comp clean fclean re

all: $(NAME)

$(OBJ): $(SRCS)
	$(CC) -c $(CFLAGS) $(SRCS)

$(LIBS): 
	$(MAKE) -C ./libft

$(NAME): $(OBJ) $(LIBS)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJ) $(LIBS)

clean:
	@rm -f $(OBJ)
	$(MAKE) -C ./libft/ clean

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C ./libft/ fclean

re: fclean all
