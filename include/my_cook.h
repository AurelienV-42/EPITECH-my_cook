/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** Thomas Meurice Aurelien Vandaële
*/

#ifndef MY_COOK_H
#define MY_COOK_H

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>

typedef struct
{
	int i;
	int in_menu;
	int close_leaflet;
	int open_menu_game;
	int open_how_to;
	int end;
	float sec;
	float sec_game;
	sfFont *font;
	sfText *text;
	sfIntRect rect_burger;
	sfIntRect rect_counter;
	sfTime time;
	sfTime time_game;
	sfRenderWindow *window;
	sfTexture *menu;
	sfTexture *leaflet;
	sfTexture *menu_game;
	sfTexture *how_to_play;
	sfTexture *burger;
	sfTexture *burger_menu;
	sfTexture *counter;
	sfSprite *sprite_leaflet;
	sfSprite *sprite_menu;
	sfSprite *sprite_menu_game;
	sfSprite *sprite_how_to_play;
	sfSprite *sprite_burger;
	sfSprite *sprite_burger_menu;
	sfSprite *sprite_counter;
	sfVector2f pos_leaflet;
	sfVector2f pos_menu_game;
	sfVector2f pos_how_to_play;
	sfVector2f pos_burger_menu;
	sfVector2f pos_burger;
	sfVector2f pos_counter;
	sfClock *clock;
	sfClock *clock_game;
	sfEvent event;
}cook_t;

#endif