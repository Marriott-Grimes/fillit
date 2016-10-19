CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = fillit

SRCS = main.c ft_sqrt.c inc_right.c \
	piece_lookup.c search.c tetramino_templates.c \
	write_to_string.c putbox.c check_legality.c \
	copy_piece_list.c new_box.c update_box_size.c \
	box_location_functions.c

OBJ = $(SRCS:.c=.o)

LIBS = libft.a

.PHONY: all comp clean fclean re

all: $(NAME)

$(OBJ): $(SRCS)
	$(CC) -c $(CFLAGS) $(SRCS)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJ) $(LIBS)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
