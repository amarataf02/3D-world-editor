/*
** EPITECH PROJECT, 2021
** is_point_in_circle.c
** File description:
** is_point_in_circle.c
*/

#include <SFML/Graphics.h>
#include <stdbool.h>
#include <math.h>

bool is_point_in_circle(sfVector2i point, sfCircleShape *circle)
{
    sfVector2f pos_circle = sfCircleShape_getPosition(circle);
    int rad = sfCircleShape_getRadius(circle);

    pos_circle.x += rad;
    pos_circle.y += rad;
    if (pow(point.x - pos_circle.x, 2) + pow(point.y - pos_circle.y, 2) <=
        pow(rad, 2))
        return (true);
    return (false);
}