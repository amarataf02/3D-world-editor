/*
** EPITECH PROJECT, 2021
** draw_circle_buttons.c
** File description:
** draw_circle_buttons.c
*/

#include <SFML/Graphics.h>
#include "my_world_structures.h"

void draw_circle_buttons(context_t *context, button_circle_t **buttons)
{
    int i = 0;

    while (buttons[i]) {
        sfRenderWindow_drawCircleShape(context->window, buttons[i]->circle, 0);
        i++;
    }
}