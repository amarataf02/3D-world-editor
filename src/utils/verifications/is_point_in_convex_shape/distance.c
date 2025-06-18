/*
** EPITECH PROJECT, 2021
** distance.c
** File description:
** distance.c
*/

#include <SFML/Graphics.h>
#include <math.h>

float distance(sfVector2f p1, sfVector2f p2)
{
    float cath1 = fabsf(p1.x - p2.x);
    float cath2 = fabsf(p1.y - p2.y);

    return (sqrtf(pow(cath1, 2) + pow(cath2, 2)));
}