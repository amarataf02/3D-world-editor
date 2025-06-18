/*
** EPITECH PROJECT, 2021
** poll_event.c
** File description:
** poll_event.c
*/

#include <stdlib.h>
#include <math.h>
#include <SFML/Graphics.h>
#include "my_world.h"
#include "my_world_macros.h"

void free_map(game_t *game)
{
    int i = 0;
    int j = 0;

    while (i < game->size_map.y) {
        free(game->map[i]);
        i++;
    }
    free(game->map);
    i = 0;
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

void sum_angle(sfEvent event, objects_t *objects)
{
    if (event.key.code == sfKeyLeft)
        objects->game->angle.x++;
    else
        objects->game->angle.y++;
}

void event_left_rigth_pressed(sfEvent event, objects_t *objects)
{
    if (event.key.code == sfKeyLeft || event.key.code == sfKeyRight) {
        sum_angle(event, objects);
        free_map(objects->game);
        objects->game->map = create_2d_map(objects->game->d_map,
        objects->game->size_map, objects->game->angle);
        objects->game->zoom = 20;
        resize_map(objects->game);
        objects->game->size_px_map.x = get_map_width(objects->game->map,
        objects->game->size_map);
        objects->game->size_px_map.y = get_map_height(objects->game->map,
        objects->game->size_map);
        objects->game->dis_zero_to_rigth = objects->game->map[0]
        [objects->game->size_map.x - 1].x;
        center_map(objects->game);
        objects->game->map_textures = create_map_textures(objects->game->map,
        (sfVector2i){objects->game->size_map.x - 1,
        objects->game->size_map.y - 1});
    }
}

void poll_event(context_t *context, objects_t *objects)
{
    while (sfRenderWindow_pollEvent(context->window, &context->event)) {
        event_while_pressing(context, objects);
        event_closed(context->event, context->window);
        event_mouse_released(context, objects);
        event_scrolled(context->event, objects);
        event_up_down_pressed(context->event, objects);
        event_left_rigth_pressed(context->event, objects);
    }
}