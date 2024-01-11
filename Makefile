##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC = 	src/fill_struct.c \
        src/linked.c \
        src/display.c \
        src/rooms.c \
        src/start.c \
        src/end.c \
        src/tunnel.c \
        src/my_str_to_word_array.c \
        src/extract.c \
        src/loading_each_list.c \
        src/print_each_list.c \
        src/lib/my_strncmp.c \
        src/lib/my_strcpy.c \
        src/lib/my_getnbr.c \
        src/lib/my_strlen.c \
        src/lib/my_strstr.c \
        src/lib/my_strcat.c \
        src/moves/ant.c \
        src/moves/value.c \
        src/moves/print_anthill.c \
        src/moves/tuple.c \
        src/moves/graph.c \
        src/moves/moves.c \
        my_printf/my_printf.c 			\
        my_printf/my_put_nbr.c 			\
        my_printf/my_putchar.c			\
        my_printf/my_putstr.c				\
        my_printf/my_putfloat.c			\
        my_printf/octet.c					\
        my_printf/hexadecimal_maj.c         \
        my_printf/hexadecimal.c

SRC_TEST = tests/test.c

SRC_MAIN = src/main.c

DEBUG = -g3

CPPFLAGS += -I./includes

NAME	=	lem_in

NAME1	= criterion

OBJ	=	$(SRC:.c=.o) $(SRC_MAIN:.c=.o)

OBJ_TEST = $(SRC:.c=.o)	$(SRC_TEST:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
			gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm $(NAME) -f

re : fclean all

debug:	$(OBJ)
			gcc -o $(NAME) $(OBJ) $(DEBUG)

tests_run: $(OBJ_TEST)
						gcc -o $(NAME1) $(OBJ_TEST) -lcriterion --coverage
.PHONY: all clean fclean re
