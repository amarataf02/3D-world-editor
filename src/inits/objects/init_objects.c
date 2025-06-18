/*
** EPITECH PROJECT, 2021
** init_objects.c
** File description:
** init_objects.c
*/

#include <SFML/System/Vector2.h>
#include <stdlib.h>
#include "my_world.h"
#include "my_world_macros.h"
#include "my_world_structures.h"

objects_t *init_objects(void)
{
    objects_t *objects = malloc(sizeof(objects_t));

    objects->menu_or_game = false;
    objects->menu = init_objects_menu();
    objects->game = init_objects_game((sfVector2i) {X_MAP + 1, Y_MAP + 1});
    return (objects);
}