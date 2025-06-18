/*
** EPITECH PROJECT, 2021
** get_map_width.c
** File description:
** get_map_width.c
*/

#include <stdio.h>
#include "my_world_structures.h"

int get_map_width(sfVector2f **map, sfVector2i size_map)
{
    sfVector2f left_point = map[size_map.y - 1][0];
    sfVector2f right_point = map[0][size_map.x - 1];

    return (right_point.x - left_point.x);
}