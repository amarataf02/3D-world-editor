/*
** EPITECH PROJECT, 2021
** print_one_static_sphere.c
** File description:
** print_one_static_sphere.c
*/

#include <SFML/Graphics.h>
#include "my_world_macros.h"
#include "my_world_structures.h"

void print_one_static_sphere(context_t *context, objects_t *objects)
{
    sfColor color = (sfColor) {100, 255, 74, 255};
    sfVector2f pos = objects->game->map[objects->game->vertex_selected[0].y]
    [objects->game->vertex_selected[0].x];

    pos.x -= 15;
    pos.y -= 15;
    sfSprite_setPosition(objects->game->red_spheres[0], pos);
    sfSprite_setTexture(objects->game->red_spheres[0],
    objects->game->sphere_textures[1], 0);
    sfRenderWindow_drawSprite(context->window, objects->game->red_spheres[0],
    NULL);
}