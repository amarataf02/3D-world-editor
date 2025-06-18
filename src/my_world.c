/*
** EPITECH PROJECT, 2021
** my_world
** File description:
** my_world
*/

#include <SFML/Graphics.h>
#include "my_world.h"
#include "my_world_macros.h"
#include "my_world_structures.h"
#include <math.h>

int start_simulation(context_t *context, objects_t *objects)
{
    int i = 0;
    int j = 0;
    while (sfRenderWindow_isOpen(context->window)) {
        poll_event(context, objects);
        sfRenderWindow_clear(context->window, sfBlack);
        draw_context(context, objects);
        sfRenderWindow_display(context->window);
    }
    sfRenderWindow_destroy(context->window);
    free_context(context);
    free_objects(objects);
    return (SUCCESSFUL);
}

int my_world(void)
{
    context_t *context = init_context();
    objects_t *objects = init_objects();

    return (start_simulation(context, objects));
}