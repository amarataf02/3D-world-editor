/*
** EPITECH PROJECT, 2021
** disable_green_sphere.c
** File description:
** disable_green_sphere.c
*/

#include "my_world_structures.h"

void disable_green_sphere(objects_t *objects)
{
    sfSprite_setTexture(objects->game->red_spheres[0],
    objects->game->sphere_textures[0], 0);
}