/*
** EPITECH PROJECT, 2018
** runner
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include "my.h"

static void set_position_texture(cook_t *ptr)
{
	sfSprite_setPosition(ptr->sprite_leaflet, ptr->pos_leaflet);
	sfSprite_setPosition(ptr->sprite_menu_game, ptr->pos_menu_game);
	sfSprite_setPosition(ptr->sprite_how_to_play, ptr->pos_how_to_play);
	sfSprite_setPosition(ptr->sprite_burger_menu, ptr->pos_burger_menu);
	sfSprite_setPosition(ptr->sprite_burger, ptr->pos_burger);
	sfSprite_setPosition(ptr->sprite_counter, ptr->pos_counter);
	sfSprite_setTexture(ptr->sprite_leaflet, ptr->leaflet, sfTrue);
	sfSprite_setTexture(ptr->sprite_menu, ptr->menu, sfTrue);
	sfSprite_setTexture(ptr->sprite_menu_game, ptr->menu_game, sfTrue);
	sfSprite_setTexture(ptr->sprite_how_to_play, ptr->how_to_play, sfTrue);
	sfSprite_setTexture(ptr->sprite_burger, ptr->burger, sfTrue);
	sfSprite_setTexture(ptr->sprite_burger_menu, ptr->burger_menu, sfTrue);
	sfSprite_setTexture(ptr->sprite_counter, ptr->counter, sfTrue);
}

static void set_texture(cook_t *ptr)
{
	ptr->font = sfFont_createFromFile("pict/font.ttf");
	ptr->text = sfText_create();
	ptr->sprite_menu = sfSprite_create();
	ptr->sprite_leaflet = sfSprite_create();
	ptr->sprite_menu_game = sfSprite_create();
	ptr->sprite_how_to_play = sfSprite_create();
	ptr->sprite_burger = sfSprite_create();
	ptr->sprite_burger_menu = sfSprite_create();
	ptr->sprite_counter = sfSprite_create();
	set_position_texture(ptr);
	sfRenderWindow_setFramerateLimit(ptr->window, 60);
}

static void set_position(cook_t *ptr)
{
	ptr->pos_leaflet.x = 300;
	ptr->pos_leaflet.y = 130;
	ptr->pos_menu_game.x = 610;
	ptr->pos_menu_game.y = 240;
	ptr->pos_how_to_play.x = 500;
	ptr->pos_how_to_play.y = 250;
	ptr->pos_burger.x = 500;
	ptr->pos_burger.y = 250;
	ptr->pos_burger_menu.x = 900;
	ptr->pos_burger_menu.y = 70;
	ptr->pos_counter.x = 1820;
	ptr->pos_counter.y = 20;
}

static void initialize(cook_t *ptr)
{
	sfIntRect rect_burger = {0, 0, 120, 183};
	sfIntRect rect_counter = {0, 0, 60, 70};

	ptr->rect_burger = rect_burger;
	ptr->rect_counter = rect_counter;
	ptr->in_menu = 0;
	ptr->close_leaflet = 0;
	ptr->open_menu_game = 0;
	ptr->open_how_to = 0;
	ptr->end = 0;
}
int create_and_set_window(cook_t *ptr)
{
	initialize(ptr);
	set_position(ptr);
	ptr->clock = sfClock_create();
	ptr->clock_game = sfClock_create();
	ptr->counter = sfTexture_createFromFile("pict/counter.png", NULL);
	ptr->menu = sfTexture_createFromFile("pict/menu.png", NULL);
	ptr->leaflet = sfTexture_createFromFile("pict/leaflet.png", NULL);
	ptr->menu_game = sfTexture_createFromFile("pict/menu_game.png", NULL);
	ptr->how_to_play = sfTexture_createFromFile("pict/how_to_play.png",
		NULL);
	ptr->burger = sfTexture_createFromFile("pict/burger.png",
		NULL);
	ptr->burger_menu = sfTexture_createFromFile("pict/burger_menu.png",
		NULL);
	if (ptr->menu == NULL || ptr->clock == NULL || ptr->leaflet == NULL
		|| ptr->menu_game == NULL || ptr->how_to_play == NULL
		|| ptr->burger == NULL || ptr->burger_menu == NULL
		|| ptr->clock_game == NULL)
		return (84);
	set_texture(ptr);
	return (0);
}