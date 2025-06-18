/*
** EPITECH PROJECT, 2021
** print_one_no_static_sphere.c
** File description:
** print_one_no_static_sphere.c
*/

#include <SFML/Graphics.h>
#include "my_world_structures.h"

void is_print_one_no_static_sphere(context_t *context, objects_t *objects,
bool *printed, int i)
{
    sfVector2i pos = sfMouse_getPositionRenderWindow(context->window);
    int j = 0;

    while (j < objects->game->size_map.x && !*printed) {
        if (objects->game->map[i][j].x <= (pos.x + 10) &&
        objects->game->map[i][j].y <= (pos.y + 10) &&
        objects->game->map[i][j].x >= (pos.x - 10) &&
        objects->game->map[i][j].y >= (pos.y - 10)) {
            sfSprite_setPosition(objects->game->red_spheres[0],
            (sfVector2f) {objects->game->map[i][j].x - 15,
            objects->game->map[i][j].y - 15});
            sfRenderWindow_drawSprite(context->window,
            objects->game->red_spheres[0], NULL);
            *printed = true;
        }
        j++;
    }
}

void print_one_no_static_sphere(context_t *context, objects_t *objects)
{
    int i = 0;
    bool printed = false;

    while (i < objects->game->size_map.y && !printed &&
    !objects->game->vertex_pressed) {
        is_print_one_no_static_sphere(context, objects, &printed, i);
        i++;
    }
}