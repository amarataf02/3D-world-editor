/*
** EPITECH PROJECT, 2021
** free_texture_map.c
** File description:
** free_texture_map.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my_world_structures.h"

void free_texture_map(game_t *game)
{
    int i = 0;
    int j = 0;

    while (i < game->size_map.y - 1) {
        while (j < game->size_map.x - 1) {
            sfConvexShape_destroy(game->map_textures[i][j]);
            j++;
        }
        j = 0;
        free(game->map_textures[i]);
        i++;
    }
    free(game->map_textures);
}