/*
** EPITECH PROJECT, 2021
** button_rect_is_clicked.c
** File description:
** button_rect_is_clicked.c
*/

#include <SFML/Graphics.h>
#include "my_world.h"

bool button_rect_is_clicked(button_rect_t *button, sfVector2i click_position)
{
    if (is_point_in_rectangle(click_position, button->rect))
        return (true);
    return (false);
}