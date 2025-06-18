/*
** EPITECH PROJECT, 2021
** is_index_texture.c
** File description:
** is_index_texture.c
*/

#include "my_world_structures.h"

bool is_index_texture(objects_t *objects)
{
    if (objects->game->index_mode > 1)
        return (true);
    return (false);
}