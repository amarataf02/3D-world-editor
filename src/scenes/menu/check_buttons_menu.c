/*
** EPITECH PROJECT, 2021
** check_buttons_menu.c
** File description:
** check_buttons_menu.c
*/

#include <SFML/Graphics.h>
#include "my_world.h"

void check_buttons_menu(sfRenderWindow *window, objects_t *objects)
{
    int i = 0;
    sfVector2i pos_render = sfMouse_getPositionRenderWindow(window);
    button_rect_t *button = NULL;
    sfRectangleShape *rect = NULL;

    while (objects->menu->menu_buttons[i]) {
        button = objects->menu->menu_buttons[i];
        if (button_rect_is_clicked(button, pos_render)) {
            rect = button->rect;
            sfRectangleShape_setFillColor(rect, sfBlue);
            sfRenderWindow_drawRectangleShape(window, rect, NULL);
            sfRenderWindow_display(window);
            button->callback(window, objects);
        }
        i++;
    }
}