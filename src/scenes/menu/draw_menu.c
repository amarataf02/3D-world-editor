/*
** EPITECH PROJECT, 2021
** draw_menu.c
** File description:
** draw_menu.c
*/

#include "my_world.h"
#include "my_world_structures.h"

void draw_menu(context_t *context, objects_t *objects)
{
    draw_background(context, objects->menu->background_sprite);
    draw_rect_buttons(context, objects->menu->menu_buttons);
    button_hover_menu(context, objects);
}