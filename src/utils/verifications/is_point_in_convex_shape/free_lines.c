/*
** EPITECH PROJECT, 2021
** free_lines.c
** File description:
** free_lines.c
*/

#include <stdlib.h>
#include "my_world_structures.h"

void free_lines(line_t *pointline, line_t *shapeline)
{
    free(shapeline);
    free(pointline);
}