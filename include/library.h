/*
** EPITECH PROJECT, 2018
** Library my.h
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#ifndef LIBRARY_H_
#define LIBRARY_H_

void my_putchar(char);
void my_putstr(char const *);
int my_putstr_error(char const *);
void my_putnbr(int);
int my_strlen(char const *);
int my_strcmp(char const *, char const *);
int my_atoi(char *);
char *my_strcat(char *, char *);

/* Printf */

#include <stdarg.h>

int my_printf(char *, ...);
char *my_strcpy(char const *);
char *my_strdup(char const *);
int my_putchar_printf(va_list);
int my_putstr_printf(va_list);
int my_putnbr_printf(va_list);
int my_putchar_percentage(void);
int my_putnbr_octal_printf(va_list);
int my_putnbr_hexa_up_printf(va_list);
int my_putnbr_hexa_down_printf(va_list);
int my_putnbr_base(int, char *);
int my_putunsignednbr_printf(va_list);
int my_putunsignednbr(int);
int my_putnbr_hexa_ptr_printf(va_list);
int my_putnbr_binary_printf(va_list);

#endif
