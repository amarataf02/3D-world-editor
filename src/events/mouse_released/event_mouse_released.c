/*
** EPITECH PROJECT, 2021
** event_mouse_released.c
** File description:
** event_mouse_released.c
*/

#include <SFML/Graphics.h>
#include "my_world.h"
#include "my_world_macros.h"
#include "my_world_structures.h"

void check_click_screen(sfEvent event, objects_t *objects)
{
    if (!is_index_texture(objects) && objects->game->index_mode == 0)
        handle_events(event, objects);
    else if (!is_index_texture(objects) && objects->game->index_mode == 1)
        handle_events_four_vertex(event, objects);
}

void event_mouse_released(context_t *context, objects_t *objects)
{
    sfEvent event = context->event;

    if (event.type == sfEvtMouseButtonReleased) {
        if (is_menu_active(objects))
            check_buttons_menu(context->window, objects);
        else {
            check_buttons_game(context->window, objects);
            check_click_screen(event, objects);
        }
    }
}