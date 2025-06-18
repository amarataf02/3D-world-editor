/*
** EPITECH PROJECT, 2021
** free_maps.c
** File description:
** free_maps.c
*/

#include <stdlib.h>
#include "my_world_structures.h"

void free_maps(game_t *game)
{
    int i = 0;

    while (i < game->size_map.y) {
        free(game->d_map[i]);
        free(game->map[i]);
        i++;
    }
    free(game->d_map);
    free(game->map);
}