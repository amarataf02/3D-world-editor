/*
** EPITECH PROJECT, 2021
** init_texture_buttons.c
** File description:
** init_texture_buttons.c
*/

#include <stdlib.h>
#include "c_functions.h"
#include "my_world_macros.h"

char **init_texture_buttons(void)
{
    char **array = malloc((NUM_OPTIONS_GREEN_BUTTON + 1) * sizeof(char *));

    array[0] = my_strdup(ONE_VERTEX);
    array[1] = my_strdup(FOUR_VERTEX);
    array[2] = my_strdup(RIVER_TEXTURE);
    array[3] = my_strdup(MOUNTAIN_TEXTURE);
    array[4] = my_strdup(GRASS_TEXTURE);
    array[5] = my_strdup(GROUND_TEXTURE);
    array[6] = NULL;
    return (array);
}
