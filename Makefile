##
## EPITECH PROJECT, 2017
## Aurélien Vandaële <aurelien.vandaele@epitech.eu>
## File description:
## Makefile
##

SRC	=	src/main.c		\
		src/destroy.c		\
		src/my_cook.c		\
		src/set_window.c	\
		src/event.c		\
		src/in_game.c

NAME	=	my_cook

OBJ	=	$(SRC:.c=.o)

COMPIL	=	-lmy -Llib/my  -l c_graph_prog

CFLAGS	=	-W -Wall -Werror -Wextra -I include/

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C lib/my
		make clean -C lib/my
		gcc -o $(NAME) $(OBJ) $(COMPIL) $(CFLAGS)
		make clean

clean:
		rm -f $(OBJ)
		rm -rf *~ src/*~ include/*~ lib/*~ lib/my/*~

fclean:		clean
		make fclean -C lib/my
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean
