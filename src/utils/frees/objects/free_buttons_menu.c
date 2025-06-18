/*
** EPITECH PROJECT, 2021
** free_buttons_menu.c
** File description:
** free_buttons_menu.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my_world_macros.h"
#include "my_world_structures.h"

void free_buttons_menu(button_rect_t **buttons)
{
    int i = 0;
    sfTexture *texture = NULL;

    while (i < NUM_BUTTONS_MENU) {
        texture = (sfTexture *)sfRectangleShape_getTexture(buttons[i]->rect);
        sfTexture_destroy(texture);
        sfRectangleShape_destroy(buttons[i]->rect);
        free(buttons[i]);
        i++;
    }
    free(buttons);
}