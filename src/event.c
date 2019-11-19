/*
** EPITECH PROJECT, 2022
** my_cook_2017
** File description:
** Created by Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include "my_cook.h"
#include "library.h"
#include <stdio.h>

static void event_menu(cook_t *ptr)
{
	if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue) {
		if (ptr->close_leaflet == 0 || ptr->event.type == sfEvtClosed)
			sfRenderWindow_close(ptr->window);
		if (ptr->close_leaflet == 1)
			ptr->close_leaflet = 2;
		else
			ptr->close_leaflet = 0;
	}
	if (sfMouse_isButtonPressed(sfMouseLeft) == 1)
		if (sfMouse_getPosition(sfMouseLeft).x >= 1370
			&& sfMouse_getPosition(sfMouseLeft).x <= 1570
			&& sfMouse_getPosition(sfMouseLeft).y >= 40
			&& sfMouse_getPosition(sfMouseLeft).y <= 250)
			ptr->close_leaflet = 1;
	if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue) {
		ptr->in_menu = 1;
		ptr->menu = sfTexture_createFromFile(
			"pict/ingame.png", NULL);
		sfSprite_setTexture(ptr->sprite_menu, ptr->menu,
			sfTrue);
	}
}

static void in_game_button(cook_t *ptr)
{
	if (sfMouse_getPosition(sfMouseLeft).x >= 615
		&& sfMouse_getPosition(sfMouseLeft).x <= 1280
		&& sfMouse_getPosition(sfMouseLeft).y >= 400
		&& sfMouse_getPosition(sfMouseLeft).y <= 510)
		ptr->open_how_to = 1;
	if (sfMouse_getPosition(sfMouseLeft).x >= 615
		&& sfMouse_getPosition(sfMouseLeft).x <= 1280
		&& sfMouse_getPosition(sfMouseLeft).y >= 550
		&& sfMouse_getPosition(sfMouseLeft).y <= 682) {
		ptr->menu = sfTexture_createFromFile(
			"pict/menu.png", NULL);
		sfSprite_setTexture(ptr->sprite_menu, ptr->menu,
			sfTrue);
		ptr->in_menu = 0;
		ptr->open_menu_game = 0;
	}
	if (sfMouse_getPosition(sfMouseLeft).x >= 615
		&& sfMouse_getPosition(sfMouseLeft).x <= 1280
		&& sfMouse_getPosition(sfMouseLeft).y >= 683
		&& sfMouse_getPosition(sfMouseLeft).y <= 800)
		sfRenderWindow_close(ptr->window);
}

static void in_game(cook_t *ptr)
{
	if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
		ptr->open_menu_game = 1;
	if (sfMouse_isButtonPressed(sfMouseLeft) == 1
		&& ptr->open_how_to != 1) {
		if (sfMouse_getPosition(sfMouseLeft).x >= 615
			&& sfMouse_getPosition(sfMouseLeft).x <= 1280
			&& sfMouse_getPosition(sfMouseLeft).y >= 250
			&& sfMouse_getPosition(sfMouseLeft).y <= 367)
			ptr->open_menu_game = 0;
		in_game_button(ptr);
	}
}

void event(cook_t *ptr)
{
	while (sfRenderWindow_pollEvent(ptr->window, &ptr->event)) {
		if (ptr->in_menu == 0)
			event_menu(ptr);
		else
			in_game(ptr);
	}
}
