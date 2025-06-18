/*
** EPITECH PROJECT, 2021
** get_intersection_points.c
** File description:
** get_intersection_points.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my_world.h"
#include "my_world_structures.h"

sfVector2f **get_intersection_points(sfConvexShape *shape, sfVector2i point)
{
    t_intersect_points *s_inter = init_intersect_struct(shape);
    int i = 0;

    if (sfConvexShape_getPointCount(shape) < 3)
        return (s_inter->intersectPoints);
    set_point_line(s_inter->point_line, point, s_inter->bounds);
    while (i < s_inter->nPoints) {
        set_shape_line(s_inter->shape_line, i, s_inter->nPoints, shape);
        s_inter->crossingLine = eval_crossing_line(s_inter->shape_line, point);
        s_inter->p = intersection(s_inter->shape_line, s_inter->point_line);
        if (s_inter->crossingLine &&
            is_point_in_line(s_inter->shape_line, s_inter->p))
            add_intersect_point(&s_inter->intersectPoints, &s_inter->p);
        else
            free(s_inter->p);
        i++;
    }
    free_lines(s_inter->point_line, s_inter->shape_line);
    return (return_intersect_points(s_inter));
}