/*
** EPITECH PROJECT, 2018
** cook
** File description:
** Thomas Meurice Aurélien Vendaêle
*/

#include "my.h"
#include <stdlib.h>

void destroy(cook_t *ptr)
{
	sfClock_destroy(ptr->clock);
	sfClock_destroy(ptr->clock_game);
	sfSprite_destroy(ptr->sprite_leaflet);
	sfSprite_destroy(ptr->sprite_menu);
	sfSprite_destroy(ptr->sprite_menu_game);
	sfSprite_destroy(ptr->sprite_how_to_play);
	sfSprite_destroy(ptr->sprite_burger_menu);
	sfSprite_destroy(ptr->sprite_burger);
	sfSprite_destroy(ptr->sprite_counter);
	sfTexture_destroy(ptr->menu);
	sfTexture_destroy(ptr->leaflet);
	sfTexture_destroy(ptr->menu_game);
	sfTexture_destroy(ptr->how_to_play);
	sfTexture_destroy(ptr->burger);
	sfTexture_destroy(ptr->burger_menu);
	sfTexture_destroy(ptr->counter);
	sfRenderWindow_destroy(ptr->window);
}