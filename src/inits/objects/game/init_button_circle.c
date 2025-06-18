/*
** EPITECH PROJECT, 2021
** init_button_circle.c
** File description:
** init_button_circle.c
*/

#include <stdlib.h>
#include "my_world_structures.h"

button_circle_t *init_button_circle(sfVector2f pos,
                                    int diameter,
                                    void(*ptr),
                                    char *path)
{
    button_circle_t *button = malloc(sizeof(button_circle_t));
    sfTexture *texture = sfTexture_createFromFile(path, NULL);

    if (!button)
        return (NULL);
    button->circle = sfCircleShape_create();
    sfCircleShape_setPosition(button->circle, pos);
    sfCircleShape_setRadius(button->circle , diameter / 2);
    sfCircleShape_setTexture(button->circle, texture, 0);
    button->callback = ptr;
    return (button);
}