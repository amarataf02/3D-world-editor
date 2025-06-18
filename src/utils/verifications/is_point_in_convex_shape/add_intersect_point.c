/*
** EPITECH PROJECT, 2021
** add_intersect_point.c
** File description:
** add_intersect_point.c
*/

#include <SFML/Graphics.h>
#include "my_world.h"

void add_intersect_point(sfVector2f ***intersectPoints, sfVector2f **p)
{
    *intersectPoints = resize_sfvector2f_matrix(*intersectPoints);
    (*intersectPoints)[get_len_sfvector2f_matrix(*intersectPoints)] = *p;
}