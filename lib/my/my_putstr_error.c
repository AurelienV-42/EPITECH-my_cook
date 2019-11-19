/*
** EPITECH PROJECT, 2018
** Library : my_putstr_error
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include "library.h"
#include <unistd.h>

int my_putstr_error(char const *str)
{
	write(2, str, my_strlen(str));
	return (84);
}