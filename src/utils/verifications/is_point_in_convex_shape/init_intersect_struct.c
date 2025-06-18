/*
** EPITECH PROJECT, 2021
** init_intersect_struct.c
** File description:
** init_intersect_struct.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdbool.h>
#include "my_world.h"
#include "my_world_structures.h"

t_intersect_points *init_intersect_struct(sfConvexShape *shape)
{
    t_intersect_points *inter_points = malloc(sizeof(t_intersect_points));

    inter_points->nPoints = sfConvexShape_getPointCount(shape);
    inter_points->crossingLine = true;
    inter_points->intersectPoints = init_intersect_points();
    inter_points->p = NULL;
    inter_points->point_line = malloc(sizeof(line_t));
    inter_points->shape_line = malloc(sizeof(line_t));
    if (sfConvexShape_getPointCount(shape) >= 3)
        inter_points->bounds = sfConvexShape_getLocalBounds(shape);
    return (inter_points);
}