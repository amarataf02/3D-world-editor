/*
** EPITECH PROJECT, 2021
** button_hover_game.c
** File description:
** button_hover_game.c
*/

#include <SFML/Graphics.h>
#include "my_world.h"
#include "my_world_structures.h"

void button_hover_game(context_t *context, objects_t *objects)
{
    int i = 0;
    sfColor color = (sfColor) {200, 200, 200, 255};
    sfCircleShape *circle = NULL;
    sfVector2i pos_render = sfMouse_getPositionRenderWindow(context->window);

    while (objects->game->game_buttons[i]) {
        circle = objects->game->game_buttons[i]->circle;
        if (is_point_in_circle(pos_render, circle))
            sfCircleShape_setFillColor(circle, color);
        else
            sfCircleShape_setFillColor(circle, sfWhite);
        i++;
    }
}