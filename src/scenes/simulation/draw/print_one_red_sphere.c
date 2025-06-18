/*
** EPITECH PROJECT, 2021
** print_one_red_sphere.c
** File description:
** print_one_red_sphere.c
*/

#include <SFML/Graphics.h>
#include "my_world.h"
#include "my_world_structures.h"

void print_one_red_sphere(context_t *context, objects_t *objects)
{
    if (objects->game->vertex_pressed)
        print_one_static_sphere(context, objects);
    else
        print_one_no_static_sphere(context, objects);
}