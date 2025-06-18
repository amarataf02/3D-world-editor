/*
** EPITECH PROJECT, 2021
** callback_game_texture.c
** File description:
** callback_game_texture.c
*/

#include "my_world_macros.h"
#include "my_world_structures.h"

void callback_game_texture(sfRenderWindow *window, objects_t *objects)
{
    objects->game->index_mode++;
    if (objects->game->index_mode >= NUM_OPTIONS_GREEN_BUTTON)
        objects->game->index_mode = 0;
}