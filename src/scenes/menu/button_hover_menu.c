/*
** EPITECH PROJECT, 2021
** button_hover_menu.c
** File description:
** button_hover_menu.c
*/

#include <SFML/Graphics.h>
#include "my_world.h"
#include "my_world_structures.h"

void button_hover_menu(context_t *context, objects_t *objects)
{
    int i = 0;
    sfColor color = (sfColor) {200, 200, 200, 255};
    sfRectangleShape *rect = NULL;
    sfVector2i pos_render = sfMouse_getPositionRenderWindow(context->window);

    while (objects->menu->menu_buttons[i]) {
        rect = objects->menu->menu_buttons[i]->rect;
        if (is_point_in_rectangle(pos_render, rect))
            sfRectangleShape_setFillColor(rect, color);
        else
            sfRectangleShape_setFillColor(rect, sfWhite);
        i++;
    }
}