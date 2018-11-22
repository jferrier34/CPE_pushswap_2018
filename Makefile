##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	my_basics_functions.c \
		my_basics_functions2.c \
		my_elementary_functions.c \
		my_init_function.c \
		my_pushswap.c

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -ggdb3 -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
