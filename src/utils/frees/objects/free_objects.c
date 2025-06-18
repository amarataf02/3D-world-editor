/*
** EPITECH PROJECT, 2021
** free_objects.c
** File description:
** free_objects.c
*/

#include <stdlib.h>
#include "my_world.h"
#include "my_world_structures.h"

void free_objects(objects_t *objects)
{
    free_menu(objects->menu);
    free_game(objects->game);
    free(objects);
}