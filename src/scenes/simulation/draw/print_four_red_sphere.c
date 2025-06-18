/*
** EPITECH PROJECT, 2021
** print_four_red_sphere.c
** File description:
** print_four_red_sphere.c
*/

#include <SFML/Graphics.h>
#include "my_world.h"
#include "my_world_structures.h"

void set_pos_four_vertex(objects_t *objects, int i, int j)
{
    sfSprite_setPosition(objects->game->red_spheres[0], (sfVector2f)
    {objects->game->map[i][j].x - 15, objects->game->map[i][j].y - 15});
    sfSprite_setPosition(objects->game->red_spheres[1], (sfVector2f)
    {objects->game->map[i][j + 1].x - 15,
    objects->game->map[i][j + 1].y - 15});
    sfSprite_setPosition(objects->game->red_spheres[2], (sfVector2f)
    {objects->game->map[i + 1][j].x - 15,
    objects->game->map[i + 1][j].y - 15});
    sfSprite_setPosition(objects->game->red_spheres[3], (sfVector2f)
    {objects->game->map[i + 1][j + 1].x - 15,
    objects->game->map[i + 1][j + 1].y - 15});
}

void draw_four_vertex_sprites(context_t *context, objects_t *objects)
{
    sfRenderWindow_drawSprite(context->window,
    objects->game->red_spheres[0], NULL);
    sfRenderWindow_drawSprite(context->window,
    objects->game->red_spheres[1], NULL);
    sfRenderWindow_drawSprite(context->window,
    objects->game->red_spheres[2], NULL);
    sfRenderWindow_drawSprite(context->window,
    objects->game->red_spheres[3], NULL);
}

void is_print_four_red_sphere(context_t *context, objects_t *objects,
bool *printed, int i)
{
    sfVector2i pos = sfMouse_getPositionRenderWindow(context->window);
    int j = 0;

    while (j < objects->game->size_map.x - 1 && !*printed) {
        if (is_point_in_convex_shape(objects->game->map_textures[i][j],
        pos)) {
            set_pos_four_vertex(objects, i, j);
            draw_four_vertex_sprites(context, objects);
            *printed = !*printed;
        }
        j++;
    }
}

void print_four_red_sphere(context_t *context, objects_t *objects)
{
    int i = 0;
    bool printed = false;

    while (i < objects->game->size_map.y - 1 && !printed) {
        is_print_four_red_sphere(context, objects, &printed, i);
        i++;
    }
}