/*
** EPITECH PROJECT, 2021
** draw_simulation.c
** File description:
** draw_simulation.c
*/

#include <SFML/Graphics.h>
#include "my_world.h"
#include "my_world_macros.h"
#include "my_world_structures.h"

void draw_texture_map(sfRenderWindow *window, objects_t *objects)
{
    int i = 0;
    int j = 0;

    while (i < objects->game->size_map.y - 1) {
        while (j < objects->game->size_map.x - 1) {
            sfRenderWindow_drawConvexShape(window,
            objects->game->map_textures[i][j], NULL);
            j++;
        }
        j = 0;
        i++;
    }
}

void draw_icon_texture(context_t *context, objects_t *objects)
{
    sfRenderWindow_drawSprite(context->window,
    objects->game->sprite_mode[objects->game->index_mode], NULL);
}

void print_red_spheres(context_t *context, objects_t *objects)
{
    if (objects->game->index_mode == 0)
        print_one_red_sphere(context, objects);
    else if (objects->game->index_mode == 1)
        print_four_red_sphere(context, objects);
}

void draw_simulation(context_t *context, objects_t *objects)
{
    draw_background(context, objects->game->background_sprite);
    draw_2d_map(context->window, objects);
    draw_texture_map(context->window, objects);
    print_red_spheres(context, objects);
    draw_circle_buttons(context, objects->game->game_buttons);
    draw_icon_texture(context, objects);
    button_hover_game(context, objects);
}