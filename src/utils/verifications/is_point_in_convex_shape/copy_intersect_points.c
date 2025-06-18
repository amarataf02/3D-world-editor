/*
** EPITECH PROJECT, 2021
** copy_intersect_points.c
** File description:
** copy_intersect_points.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my_world.h"
#include "my_world_structures.h"

sfVector2f **copy_intersect_points(t_intersect_points *s_inter)
{
    int len = get_len_sfvector2f_matrix(s_inter->intersectPoints);
    sfVector2f **copy = malloc((len + 1) * sizeof(sfVector2f *));
    int i = 0;

    while (s_inter->intersectPoints[i]) {
        copy[i] = malloc(sizeof(sfVector2f));
        copy[i]->x = s_inter->intersectPoints[i]->x;
        copy[i]->y = s_inter->intersectPoints[i]->y;
        i++;
    }
    copy[i] = NULL;
    return (copy);
}