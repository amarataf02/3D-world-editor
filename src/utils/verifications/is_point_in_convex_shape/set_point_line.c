/*
** EPITECH PROJECT, 2021
** set_point_line.c
** File description:
** set_point_line.c
*/

#include <SFML/Graphics.h>
#include "my_world_structures.h"

void set_point_line(line_t *pointline, sfVector2i point, sfFloatRect bounds)
{
    pointline->p1 = (sfVector2f) {bounds.left, point.y};
    pointline->p2 = (sfVector2f) {bounds.left + bounds.width, point.y};
}