/*
** EPITECH PROJECT, 2021
** get_map_height.c
** File description:
** get_map_height.c
*/

#include <math.h>
#include <stdio.h>
#include "my_world_structures.h"

int get_map_height(sfVector2f **map, sfVector2i size_map)
{
    sfVector2f up_point = map[size_map.y - 1][size_map.x - 1];
    sfVector2f down_point = map[0][0];

    return (down_point.y - up_point.y);
}