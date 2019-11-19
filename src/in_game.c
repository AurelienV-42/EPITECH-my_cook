/*
** EPITECH PROJECT, 2022
** my_cook_2017
** File description:
** Created by Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include "my_cook.h"
#include "library.h"
#include <stdlib.h>

static void in_game_clock(cook_t *ptr, int *i)
{
	char *a = malloc(sizeof(char) * 3);
	static char high = '0';
	static char low = '0';

	a[0] = high;
	a[1] = low;
	a[2] = '\0';
	ptr->time_game = sfClock_getElapsedTime(ptr->clock_game);
	ptr->sec_game = ptr->time_game.microseconds / 1000000.0;
	sfText_setString(ptr->text, a);
	free(a);
	if (ptr->sec_game >= 1) {
		low++;
		(*i)++;
		sfClock_restart(ptr->clock_game);
	}
	if (low == '9' + 1) {
		high++;
		low = '0';
	}
}

static void end_game(cook_t *ptr)
{
	char *str = "You made :";
	char *to_dup = my_strcat(str, "250");
	char *a;

	a = my_strdup(to_dup);
	sfText_setString(ptr->text, a);
	sfText_setFont(ptr->text, ptr->font);
	sfText_setCharacterSize(ptr->text, 80);
	sfText_setColor(ptr->text, sfRed);
	sfRenderWindow_drawText(ptr->window, ptr->text, NULL);
	ptr->menu = sfTexture_createFromFile("pict/end_game.png", NULL);
	sfSprite_setTexture(ptr->sprite_menu, ptr->menu, sfTrue);
}

void in_game(cook_t *ptr)
{
	static int i = 0;

	if (ptr->open_menu_game == 1) {
		sfRenderWindow_drawSprite(ptr->window, ptr->sprite_menu_game,
			NULL);
		if (ptr->open_how_to == 1) {
			if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
				ptr->open_how_to = 0;
			sfRenderWindow_drawSprite(ptr->window,
				ptr->sprite_how_to_play, NULL);
		}
	}
	in_game_clock(ptr, &i);
	sfText_setFont(ptr->text, ptr->font);
	sfText_setCharacterSize(ptr->text, 80);
	if (i >= 3)
		end_game(ptr);
	sfRenderWindow_drawText(ptr->window, ptr->text, NULL);
}