/*
** EPITECH PROJECT, 2021
** free_menu.c
** File description:
** free_menu.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my_world.h"
#include "my_world_structures.h"

void free_menu(menu_t *menu)
{
    free_buttons_menu(menu->menu_buttons);
    sfSprite_destroy(menu->background_sprite);
    sfTexture_destroy(menu->background_texture);
    free(menu);
}