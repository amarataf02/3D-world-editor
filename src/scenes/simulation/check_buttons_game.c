/*
** EPITECH PROJECT, 2021
** check_buttons_game.c
** File description:
** check_buttons_game.c
*/

#include <SFML/Graphics.h>
#include "my_world.h"
#include "my_world_structures.h"

bool check_buttons_game(sfRenderWindow *window, objects_t *objects)
{
    int i = 0;
    sfVector2i pos_render = sfMouse_getPositionRenderWindow(window);

    while (objects->game->game_buttons[i]) {
        if (button_circle_is_clicked(objects->game->game_buttons[i],
        pos_render)) {
            objects->game->game_buttons[i]->callback(window, objects);
            return (true);
        }
        i++;
    }
    return (false);
}