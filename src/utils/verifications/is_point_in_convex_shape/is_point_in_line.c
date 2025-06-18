/*
** EPITECH PROJECT, 2021
** is_point_in_line.c
** File description:
** is_point_in_line.c
*/

#include <SFML/Graphics.h>
#include <stdbool.h>
#include <stdlib.h>
#include "my_world.h"
#include "my_world_structures.h"

bool is_point_in_line(line_t *line, sfVector2f *point)
{
    float margin = 0.1;
    float dis_p1_p = distance(line->p1, *point);
    float dis_p2_p = distance(*point, line->p2);
    float dis_p1_p2 = distance(line->p1, line->p2);

    return (abs((dis_p1_p + dis_p2_p) - dis_p1_p2) < margin);
}