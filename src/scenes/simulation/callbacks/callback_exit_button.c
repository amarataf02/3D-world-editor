/*
** EPITECH PROJECT, 2021
** callback_exit_button.c
** File description:
** callback_exit_button.c
*/

#include <SFML/Graphics.h>
#include "my_world_structures.h"

void callback_exit_button(sfRenderWindow *window, objects_t *objects)
{
    sfRenderWindow_close(window);
}