/*
** EPITECH PROJECT, 2021
** center_map.c
** File description:
** center_map.c
*/

#include "my_world.h"
#include "my_world_macros.h"

void center_map(game_t *game)
{
    int y = 0;
    int x = 0;
    int pixel_to_center = game->dis_zero_to_rigth;

    while (y < game->size_map.y) {
        while (x < game->size_map.x) {
            game->map[y][x].x = game->map[y][x].x + ((W_WIDTH / 2) +
            (game->size_px_map.x / 2) - pixel_to_center);
            game->map[y][x].y = game->map[y][x].y + ((W_HEIGHT / 2) +
            (game->size_px_map.y / 2));
            x++;
        }
        x = 0;
        y++;
    }
}