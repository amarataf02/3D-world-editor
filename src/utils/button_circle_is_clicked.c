/*
** EPITECH PROJECT, 2021
** button_circle_is_clicked.c
** File description:
** button_circle_is_clicked.c
*/

#include <SFML/Graphics.h>
#include "my_world.h"
#include "my_world_structures.h"

bool button_circle_is_clicked(button_circle_t *button, sfVector2i click_pos)
{
    if (is_point_in_circle(click_pos, button->circle))
        return (true);
    return (false);
}