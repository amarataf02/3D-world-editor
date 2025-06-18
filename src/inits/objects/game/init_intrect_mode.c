/*
** EPITECH PROJECT, 2021
** init_intrect_mode.c
** File description:
** init_intrect_mode.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my_world_macros.h"

sfIntRect **init_intrect_mode(void)
{
    int len = NUM_OPTIONS_GREEN_BUTTON;
    sfIntRect **intrect = malloc((len + 1) *
    sizeof(sfIntRect *));
    int i = 0;
    int left = 0;

    while (i < len) {
        intrect[i] = malloc(sizeof(sfIntRect));
        intrect[i]->top = 0;
        intrect[i]->left = left;
        intrect[i]->width = 450;
        intrect[i]->height = 450;
        left += 450;
        i++;
    }
    intrect[i] = NULL;
    return (intrect);
}