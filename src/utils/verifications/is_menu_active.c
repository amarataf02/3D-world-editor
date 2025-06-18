/*
** EPITECH PROJECT, 2021
** is_menu_active.c
** File description:
** is_menu_active.c
*/

#include "my_world_structures.h"

bool is_menu_active(objects_t *objects)
{
    if (objects->menu_or_game)
        return (false);
    return (true);
}