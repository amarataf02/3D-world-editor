/*
** EPITECH PROJECT, 2021
** get_distance_rigth_to_middle.c
** File description:
** get_distance_rigth_to_middle.c
*/

#include <SFML/Graphics.h>
#include "my_world.h"

float get_distance_rigth_to_middle(game_t *game)
{
    sfVector2f right_point = game->map[0][game->size_map.x - 1];

    return (right_point.x);
}