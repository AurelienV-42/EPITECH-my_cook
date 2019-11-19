/*
** EPITECH PROJECT, 2017
** Aurélien Vandaële & Thomas Meurice
** File description:
** Library
*/

#ifndef MY_H_
#define MY_H_

#include "my_cook.h"

int my_cook(void);
int create_and_set_window(cook_t *ptr);
void destroy(cook_t *ptr);
void event(cook_t *ptr);
void in_game(cook_t *ptr);

#endif