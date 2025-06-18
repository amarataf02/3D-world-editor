/*
** EPITECH PROJECT, 2021
** return_intersect_points.c
** File description:
** return_intersect_points.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my_world.h"
#include "my_world_structures.h"

sfVector2f **return_intersect_points(t_intersect_points *s_inter)
{
    sfVector2f **cpy_intersectPoints = copy_intersect_points(s_inter);

    free_sfvector2f_matrix(s_inter->intersectPoints);
    free(s_inter);
    return (cpy_intersectPoints);
}