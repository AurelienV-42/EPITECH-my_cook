/*
** EPITECH PROJECT, 2018
** my_cook.c
** File description:
** Thomas Meurice Aurélien vendaële
*/

#include "library.h"
#include "my.h"
#include <stdlib.h>

static void in_menu(cook_t *ptr)
{
	sfRenderWindow_drawSprite(ptr->window, ptr->sprite_burger_menu,
		NULL);
	ptr->time = sfClock_getElapsedTime(ptr->clock);
	ptr->sec = ptr->time.microseconds / 1000000.0;
	sfSprite_setPosition(ptr->sprite_burger_menu, ptr->pos_burger_menu);
	if (ptr->sec > 0.15) {
		ptr->rect_burger.left += 123;
		sfSprite_setPosition(ptr->sprite_burger_menu,
			ptr->pos_burger_menu);
		sfClock_restart(ptr->clock);
	}
	if (ptr->rect_burger.left >= 366)
		ptr->rect_burger.left = 0;
	if (ptr->close_leaflet == 1)
		sfRenderWindow_drawSprite(ptr->window, ptr->sprite_leaflet,
			NULL);
}

static void window(cook_t *ptr)
{
	sfRenderWindow_clear(ptr->window, sfBlack);
	sfSprite_setTextureRect(ptr->sprite_burger_menu, ptr->rect_burger);
	sfSprite_setTextureRect(ptr->sprite_counter, ptr->rect_counter);
	sfRenderWindow_drawSprite(ptr->window, ptr->sprite_menu, NULL);
	if (ptr->in_menu == 0)
		in_menu(ptr);
	else
		in_game(ptr);
	sfRenderWindow_display(ptr->window);
}

int my_cook(void)
{
	sfVideoMode mode = {1920, 1050, 4};
	cook_t ptr;

	if ((ptr.window = sfRenderWindow_create(mode, "SFML window", sfResize
		|| sfClose, NULL)) == NULL)
		return (84);
	if (create_and_set_window(&ptr) == 84)
		return (84);
	while (sfRenderWindow_isOpen(ptr.window)) {
		event(&ptr);
		window(&ptr);
	}
	destroy(&ptr);
	return (0);
}
