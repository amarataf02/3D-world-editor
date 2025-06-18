/*
** EPITECH PROJECT, 2021
** init_intersect_points.c
** File description:
** init_intersect_points.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>

sfVector2f **init_intersect_points(void)
{
    sfVector2f **intersection = malloc(sizeof(sfVector2f *));

    intersection[0] = NULL;
    return (intersection);
}