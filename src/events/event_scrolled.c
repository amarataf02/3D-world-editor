/*
** EPITECH PROJECT, 2021
** event_scrolled.c
** File description:
** event_scrolled.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h> //BORRARRR
#include "my_world.h"
#include "my_world_macros.h"
#include "my_world_structures.h"

void free_map_texture(sfConvexShape ***map_textures, sfVector2i size)
{
    int i = 0;

    while (i < size.y) {
        free(map_textures[i]);
        i++;
    }
    free(map_textures);
}

void update_map_textures(game_t *game)
{
    int i = 0;
    int j = 0;

    while (i < game->size_map.y - 1) {
        while (j < game->size_map.x - 1) {
            sfConvexShape_setPoint(game->map_textures[i][j], 0,
            game->map[i][j]);
            sfConvexShape_setPoint(game->map_textures[i][j], 1,
            game->map[i][j + 1]);
            sfConvexShape_setPoint(game->map_textures[i][j], 2,
            game->map[i + 1][j + 1]);
            sfConvexShape_setPoint(game->map_textures[i][j], 3,
            game->map[i + 1][j]);
            j++;
        }
        j = 0;
        i++;
    }
}

void update_red_spheres(objects_t *objects)
{
    int i = 0;
    sfVector2f pos = (sfVector2f) {0, 0};

    if (objects->game->vertex_pressed) {
        pos = objects->game->map[objects->game->vertex_selected[i].y]
        [objects->game->vertex_selected[i].x];
        sfSprite_setPosition(objects->game->red_spheres[i], pos);
    }
}

void event_scrolled(sfEvent event, objects_t *objects)
{
    if (event.type == sfEvtMouseWheelScrolled) {
        if (!is_menu_active(objects) &&
            (objects->game->zoom + event.mouseWheelScroll.delta > 0)) {
            get_initial_map(objects);
            objects->game->zoom += event.mouseWheelScroll.delta;
            resize_map(objects->game);
            objects->game->size_px_map.y =
            get_map_height(objects->game->map, objects->game->size_map);
            objects->game->size_px_map.x =
            get_map_width(objects->game->map, objects->game->size_map);
            objects->game->dis_zero_to_rigth =
            objects->game->map[0][objects->game->size_map.x - 1].x;
            center_map(objects->game);
            update_red_spheres(objects);
            update_map_textures(objects->game);
        }
    }
}