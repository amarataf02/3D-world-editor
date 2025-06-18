/*
** EPITECH PROJECT, 2021
** project_iso_point.c
** File description:
** project_iso_point.c
*/

#include <SFML/System/Vector2.h>
#include <math.h>
#include "my_world_macros.h"
#include "my_world_structures.h"

float rad_to_deg(float num)
{
    return (num * M_PI / 180);
}

sfVector2f project_iso_point(int x, int y, int z, sfVector2i angle)
{
    sfVector2f new_vector;

    new_vector.x = (cos(rad_to_deg(angle.x)) * x) -
    (cos(rad_to_deg(angle.x)) * y);
    new_vector.y = (sin(rad_to_deg(angle.y)) * y) +
    (sin(rad_to_deg(angle.y)) * x) - z;
    return (new_vector);
}