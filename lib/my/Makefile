##
## EPITECH PROJECT, 2018
## Library : Makefile
## File description:
## Aurélien Vandaële <aurelien.vandaele@epitech.eu>
##

SRC	=	my_putchar.c			\
		my_putstr.c			\
		my_putstr_error.c		\
		my_strlen.c			\
		my_putnbr.c			\
		my_strcmp.c			\
		my_atoi.c			\
		my_strcat.c			\
		printf/my_strdup.c		\
		printf/my_strcpy.c		\
		printf/my_putnbr_base.c		\
		printf/my_putunsignednbr.c	\
		printf/func_to_print_base.c	\
		printf/func_to_print.c		\
		printf/my_printf.c

OBJ	= 	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	 -I../../include/

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)
		rm -f *~

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean
