/*
** EPITECH PROJECT, 2021
** print
** File description:
** create and print
*/

#include "c_functions.h"
#include "my_world.h"
#include "my_world_macros.h"

void print_map(sfVector2f **map)
{
    int y = 0;
    int x = 0;

    while (y < Y_MAP) {
        x = 0;
        while (x < X_MAP) {
            x++;
        }
        y++;
    }
}

void resize_map(game_t *game)
{
    int y = 0;
    int x = 0;

    while (y < game->size_map.y) {
        while (x < game->size_map.x) {
            game->map[y][x].x = (game->map[y][x].x * game->zoom);
            game->map[y][x].y = (game->map[y][x].y * game->zoom);
            x++;
        }
        x = 0;
        y++;
    }
}