/*
** EPITECH PROJECT, 2021
** eval_crossing_line.c
** File description:
** eval_crossing_line.c
*/

#include <SFML/Graphics.h>
#include <stdbool.h>
#include "my_world_structures.h"

bool eval_crossing_line(line_t *shape_line, sfVector2i point)
{
    return ((shape_line->p1.y >= point.y && shape_line->p2.y <= point.y) ||
    (shape_line->p2.y >= point.y && shape_line->p1.y <= point.y));
}