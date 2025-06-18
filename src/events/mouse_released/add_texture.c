/*
** EPITECH PROJECT, 2021
** add_texture.c
** File description:
** add_texture.c
*/

#include <SFML/Graphics.h>
#include "my_world.h"
#include "my_world_structures.h"

void print_texture(context_t *context, objects_t *objects, int *i, int *j)
{
    sfConvexShape_setTextureRect(objects->game->map_textures[*i][*j],
    *objects->game->intrect_mode[objects->game->index_mode - 2]);
    sfConvexShape_setTexture(objects->game->map_textures[*i][*j],
    objects->game->grid_texture, 0);
    sfConvexShape_setFillColor(objects->game->map_textures[*i][*j], sfWhite);
    sfRenderWindow_drawConvexShape(context->window,
    objects->game->map_textures[*i][*j], NULL);
    sfRenderWindow_display(context->window);
    *i = objects->game->size_map.y;
    *j = objects->game->size_map.x;
}

void add_texture(sfVector2i pos, context_t *context, objects_t *objects)
{
    int i = 0;
    int j = 0;
    sfVector2i pos_click = (sfVector2i) {pos.x, pos.y};

    while (i < objects->game->size_map.y - 1) {
        while (j < objects->game->size_map.x - 1) {
            if (is_point_in_convex_shape(objects->game->map_textures[i][j],
            pos_click))
                print_texture(context, objects, &i, &j);
            j++;
        }
        j = 0;
        i++;
    }
}