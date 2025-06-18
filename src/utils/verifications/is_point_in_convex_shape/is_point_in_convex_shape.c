/*
** EPITECH PROJECT, 2021
** is_point_in_convex_shape.c
** File description:
** is_point_in_convex_shape.c
*/

#include <SFML/Graphics.h>
#include <stdbool.h>
#include "my_world.h"

bool is_point_in_convex_shape(sfConvexShape *shape, sfVector2i point)
{
    sfVector2f **interesectPoints = get_intersection_points(shape, point);
    int nodesAtLeft = 0;
    int nodesAtRight = 0;
    int i = 0;

    while (interesectPoints[i]) {
        if (interesectPoints[i]->x < point.x)
            nodesAtLeft++;
        else if (interesectPoints[i]->x > point.x)
            nodesAtRight++;
        i++;
    }
    free_sfvector2f_matrix(interesectPoints);
    return ((nodesAtLeft % 2) == 1) && ((nodesAtRight % 2) == 1);
}