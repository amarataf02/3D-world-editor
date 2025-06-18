/*
** EPITECH PROJECT, 2021
** callback_play_button.c
** File description:
** callback_play_button.c
*/

#include <SFML/Graphics.h>
#include "my_world_structures.h"

void callback_play_button(sfRenderWindow *window, objects_t *objects)
{
    objects->menu_or_game = !objects->menu_or_game;
}