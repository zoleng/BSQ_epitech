##
## EPITECH PROJECT, 2018
## makefome
## File description:
## makefile
##

CC	=	gcc

RM	=	rm -rf

SRC	=	display_map.c		\
		main.c				\
		algorythm.c			\
		change_map_bin.c	\
		tools/my_putstr.c	\
		tools/my_putchar.c

CFLAGS	=	-I./include

CC	=	gcc

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) -g

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

mr_clean :
	find -type f -name "*~" -delete -o -type f -name "#*#" -delete

.PHONY : all clean fclean mr_clean re

