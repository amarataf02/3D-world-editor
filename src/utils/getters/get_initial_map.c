/*
** EPITECH PROJECT, 2021
** get_initial_map.c
** File description:
** get_initial_map.c
*/

#include "my_world_macros.h"
#include "my_world_structures.h"

void delete_center_mode(objects_t *objects)
{
    int i = 0;
    int j = 0;

    while (i < objects->game->size_map.y) {
        while (j < objects->game->size_map.x) {
            objects->game->map[i][j].x -= ((W_WIDTH / 2) +
            (objects->game->size_px_map.x / 2) -
            objects->game->dis_zero_to_rigth);
            objects->game->map[i][j].y -= ((W_HEIGHT / 2) +
            (objects->game->size_px_map.y / 2));
            j++;
        }
        j = 0;
        i++;
    }
}

void delete_zoom_mode(objects_t *objects)
{
    int i = 0;
    int j = 0;

    while (i < objects->game->size_map.y) {
        while (j < objects->game->size_map.x) {
            objects->game->map[i][j].x = objects->game->map[i][j].x /
            objects->game->zoom;
            objects->game->map[i][j].y = objects->game->map[i][j].y /
            objects->game->zoom;
            j++;
        }
        j = 0;
        i++;
    }
}

void get_initial_map(objects_t *objects)
{
    delete_center_mode(objects);
    delete_zoom_mode(objects);
}