/*
** EPITECH PROJECT, 2021
** event_while_pressing.c
** File description:
** event_while_pressing.c
*/

#include <SFML/Graphics.h>
#include "my_world.h"
#include "my_world_structures.h"

void poll_event_while_pressing(context_t *context, objects_t *objects)
{
    if (sfRenderWindow_waitEvent(context->window, &context->event)) {
        event_closed(context->event, context->window);
        if (context->event.type == sfEvtMouseButtonReleased)
            objects->game->pressing_texture = false;
        add_texture(sfMouse_getPositionRenderWindow(context->window),
        context, objects);
    }
}

void event_while_pressing(context_t *context, objects_t *objects)
{
    if (is_index_texture(objects) && !is_menu_active(objects)) {
        if (context->event.type == sfEvtMouseButtonPressed)
            objects->game->pressing_texture = true;
        while (objects->game->pressing_texture &&
        sfRenderWindow_isOpen(context->window)) {
            poll_event_while_pressing(context, objects);
        }
    }
}