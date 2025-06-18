/*
** EPITECH PROJECT, 2021
** event_up_down_pressed.c
** File description:
** event_up_down_pressed.c
*/

#include <SFML/Graphics.h>
#include "my_world.h"
#include "my_world_macros.h"
#include "my_world_structures.h"

void up_or_down(sfEvent event, objects_t *objects)
{
    if (event.key.code == sfKeyUp) {
        objects->game->d_map[objects->game->vertex_selected[0].y]
        [objects->game->vertex_selected[0].x]++;
    }
    else if (event.key.code == sfKeyDown) {
        objects->game->d_map[objects->game->vertex_selected[0].y]
        [objects->game->vertex_selected[0].x]--;
    }
}

void update_point(objects_t *objects)
{
    objects->game->map[objects->game->vertex_selected[0].y]
    [objects->game->vertex_selected[0].x] =
    project_iso_point(objects->game->vertex_selected[0].x,
    objects->game->vertex_selected[0].y,
    objects->game->d_map[objects->game->vertex_selected[0].y]
    [objects->game->vertex_selected[0].x], objects->game->angle);
    objects->game->map[objects->game->vertex_selected[0].y]
    [objects->game->vertex_selected[0].x].x =
    (objects->game->map[objects->game->vertex_selected[0].y]
    [objects->game->vertex_selected[0].x].x *
    objects->game->zoom) + ((W_WIDTH / 2) +
    (objects->game->size_px_map.x / 2) -
    objects->game->dis_zero_to_rigth);
    objects->game->map[objects->game->vertex_selected[0].y]
    [objects->game->vertex_selected[0].x].y =
    (objects->game->map[objects->game->vertex_selected[0].y]
    [objects->game->vertex_selected[0].x].y *
    objects->game->zoom) + ((W_HEIGHT / 2) +
    (objects->game->size_px_map.y / 2));
}

void event_up_down_pressed(sfEvent event, objects_t *objects)
{
    if (!is_index_texture(objects) && objects->game->index_mode == 0) {
        if (objects->game->vertex_pressed && (event.key.code == sfKeyUp ||
        event.key.code == sfKeyDown)) {
            up_or_down(event, objects);
            update_point(objects);
        }
    }
}