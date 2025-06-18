/*
** EPITECH PROJECT, 2021
** event_closed.c
** File description:
** event_closed.c
*/

#include <SFML/Graphics.h>

void event_closed(sfEvent event, sfRenderWindow *window)
{
    if (event.type == sfEvtClosed ||
    (event.type == sfEvtKeyReleased && event.key.code == sfKeyEscape))
        sfRenderWindow_close(window);
}