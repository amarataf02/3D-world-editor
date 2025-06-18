/*
** EPITECH PROJECT, 2021
** draw_background.c
** File description:
** draw_background.c
*/

#include <SFML/Graphics.h>
#include "my_world_structures.h"

void draw_background(context_t *context, sfSprite *sprite)
{
    sfRenderWindow_drawSprite(context->window, sprite, NULL);
}