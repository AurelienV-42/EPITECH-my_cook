/*
** EPITECH PROJECT, 2017
** Library : my_strdup
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include <stdlib.h>
#include "library.h"

char *my_strdup(char const *src)
{
	char *new = my_strcpy(src);
	return (new);
}