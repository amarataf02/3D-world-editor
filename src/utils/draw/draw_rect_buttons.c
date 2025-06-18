/*
** EPITECH PROJECT, 2021
** draw_rect_buttons.c
** File description:
** draw_rect_buttons.c
*/

#include <SFML/Graphics.h>
#include "my_world_structures.h"

void draw_rect_buttons(context_t *context, button_rect_t **buttons)
{
    int i = 0;

    while (buttons[i]) {
        sfRenderWindow_drawRectangleShape(context->window, buttons[i]->rect, 0);
        i++;
    }
}