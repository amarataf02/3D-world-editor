/*
** EPITECH PROJECT, 2021
** callback_game_reset.c
** File description:
** callback_game_reset.c
*/

#include <SFML/Graphics.h>
#include "my_world.h"
#include "my_world_macros.h"
#include "my_world_structures.h"

void reset_texture(int i, int j, objects_t *objects)
{
    if (i < objects->game->size_map.y - 1 &&
    j < objects->game->size_map.x - 1) {
        sfConvexShape_setTexture(objects->game->map_textures[i][j], NULL, 0);
        sfConvexShape_setFillColor(objects->game->map_textures[i][j],
        sfTransparent);
    }
}

void reset_points(objects_t *objects, int i, int j)
{
    objects->game->d_map[i][j] = 0;
    objects->game->map[i][j] =
    project_iso_point(j, i, objects->game->d_map[i][j], objects->game->angle);
    objects->game->map[i][j].x =
    (objects->game->map[i][j].x * objects->game->zoom) + ((W_WIDTH / 2) +
    (objects->game->size_px_map.x / 2) - objects->game->dis_zero_to_rigth);
    objects->game->map[i][j].y = (objects->game->map[i][j].y *
    objects->game->zoom) + ((W_HEIGHT / 2) +
    (objects->game->size_px_map.y / 2));
}

void callback_game_reset(sfRenderWindow *window, objects_t *objects)
{
    int i = 0;
    int j = 0;

    while (i < objects->game->size_map.y) {
        while (j < objects->game->size_map.x) {
            reset_points(objects, i, j);
            reset_texture(i, j, objects);
            j++;
        }
        j = 0;
        i++;
    }
}