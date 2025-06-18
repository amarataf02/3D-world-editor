/*
** EPITECH PROJECT, 2021
** handle
** File description:
** events
*/

#include "c_functions.h"
#include "my_world.h"
#include "my_world_macros.h"
#include "my_world_structures.h"
#include <stdlib.h>
#include <math.h>

void per_each_x_of_y(sfEvent event, objects_t *objects,
int i, bool *assigned)
{
    sfMouseButtonEvent pos = event.mouseButton;
    int j = 0;

    while (j < objects->game->size_map.x && !*assigned) {
        if (objects->game->map[i][j].x <= (pos.x + 10) &&
        objects->game->map[i][j].y <= (pos.y + 10) &&
        objects->game->map[i][j].x >= (pos.x - 10) &&
        objects->game->map[i][j].y >= (pos.y - 10)) {
            objects->game->vertex_selected[0] = (coord_t) {j, i};
            *assigned = true;
            objects->game->vertex_pressed = true;
        }
        j++;
    }
}

void set_pos_to_one_sphere(sfEvent event, objects_t *objects)
{
    int i = 0;
    bool assigned = false;

    while (i < objects->game->size_map.y && !assigned) {
        per_each_x_of_y(event, objects, i, &assigned);
        i++;
    }
}

void remove_one_sphere_x(sfEvent event, objects_t *objects,
bool *removed, int i)
{
    sfMouseButtonEvent pos = event.mouseButton;
    int j = 0;

    while (j < objects->game->size_map.x && !*removed) {
        if (objects->game->map[i][j].x <= (pos.x + 10) &&
        objects->game->map[i][j].y <= (pos.y + 10) &&
        objects->game->map[i][j].x >= (pos.x - 10) &&
        objects->game->map[i][j].y >= (pos.y - 10) &&
        objects->game->vertex_selected[0].y == i &&
        objects->game->vertex_selected[0].x == j) {
            *removed = true;
            objects->game->vertex_pressed = false;
            disable_green_sphere(objects);
        }
        j++;
    }
}

void remove_one_sphere(sfEvent event, objects_t *objects)
{
    int i = 0;
    bool removed = false;

    while (i < objects->game->size_map.y && !removed) {
        remove_one_sphere_x(event, objects, &removed, i);
        i++;
    }
}

void handle_events(sfEvent event, objects_t *objects)
{
    if (!objects->game->vertex_pressed)
        set_pos_to_one_sphere(event, objects);
    else
        remove_one_sphere(event, objects);
}