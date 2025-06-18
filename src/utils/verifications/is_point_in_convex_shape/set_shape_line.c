/*
** EPITECH PROJECT, 2021
** set_shape_line.c
** File description:
** set_shape_line.c
*/

#include "my_world_structures.h"

void set_shape_line(line_t *sline, int i, int nPoints, sfConvexShape *shape)
{
    sline->p1 = sfConvexShape_getPoint(shape, i % nPoints);
    sline->p2 = sfConvexShape_getPoint(shape, (i + 1) % nPoints);
}