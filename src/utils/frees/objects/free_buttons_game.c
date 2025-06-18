/*
** EPITECH PROJECT, 2021
** free_buttons_game.c
** File description:
** free_buttons_game.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my_world_macros.h"
#include "my_world_structures.h"

void free_buttons_game(button_circle_t **buttons)
{
    int i = 0;
    sfTexture *texture = NULL;

    while (i < NUM_BUTTONS_GAME) {
        texture = (sfTexture *)sfCircleShape_getTexture(buttons[i]->circle);
        sfTexture_destroy(texture);
        sfCircleShape_destroy(buttons[i]->circle);
        free(buttons[i]);
        i++;
    }
    free(buttons);
}