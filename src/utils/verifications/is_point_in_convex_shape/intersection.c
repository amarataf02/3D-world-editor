/*
** EPITECH PROJECT, 2021
** intersection.c
** File description:
** intersection.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my_world_structures.h"

sfVector2f *intersection(line_t *lineA, line_t *lineB)
{
    sfVector2f *intersect = malloc(sizeof(sfVector2f));
    float x1 = lineA->p1.x;
    float y1 = lineA->p1.y;
    float x2 = lineA->p2.x;
    float y2 = lineA->p2.y;
    float x3 = lineB->p1.x;
    float y3 = lineB->p1.y;
    float x4 = lineB->p2.x;
    float y4 = lineB->p2.y;
    float retX = ((x1*y2 - y1*x2)*(x3 - x4) - (x1 - x2)*(x3*y4 - y3*x4)) /
    ((x1 - x2)*(y3 - y4) - (y1 - y2)*(x3 - x4));
    float retY = ((x1*y2 - y1*x2)*(y3 - y4) - (y1 - y2)*(x3*y4 - y3*x4)) /
    ((x1 - x2)*(y3 - y4) - (y1 - y2)*(x3 - x4));

    intersect->x = retX;
    intersect->y = retY;
    return (intersect);
}