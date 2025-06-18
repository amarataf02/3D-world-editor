/*
** EPITECH PROJECT, 2021
** init_sprite_mode.c
** File description:
** init_sprite_mode.c
*/

#include <SFML/Graphics.h>
#include "c_functions.h"
#include "my_world.h"
#include "my_world_macros.h"

sfSprite **init_sprite_mode(void)
{
    char **texture_buttons = init_texture_buttons();
    sfSprite **sprites = init_array_sprites(NUM_OPTIONS_GREEN_BUTTON,
    texture_buttons);

    my_free_array_string(texture_buttons);
    return (sprites);
}