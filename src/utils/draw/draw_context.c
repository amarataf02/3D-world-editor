/*
** EPITECH PROJECT, 2021
** draw_context.c
** File description:
** draw_context.c
*/

#include "my_world.h"
#include "my_world_structures.h"

void draw_context(context_t *context, objects_t *objects)
{
    if (is_menu_active(objects))
        draw_menu(context, objects);
    else
        draw_simulation(context, objects);
}
