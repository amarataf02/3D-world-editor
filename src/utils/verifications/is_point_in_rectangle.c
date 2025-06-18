/*
** EPITECH PROJECT, 2021
** is_point_in_rectangle.c
** File description:
** is_point_in_rectangle.c
*/

#include <stdbool.h>
#include <SFML/Graphics.h>

bool is_point_in_rectangle(sfVector2i point, sfRectangleShape *rectangle)
{
    sfVector2f pos_rectangle = sfRectangleShape_getPosition(rectangle);
    sfVector2f size_rect = sfRectangleShape_getSize(rectangle);

    if ((point.x > pos_rectangle.x &&
        point.x < pos_rectangle.x + size_rect.x) &&
        (point.y > pos_rectangle.y &&
        point.y < pos_rectangle.y + size_rect.y))
        return (true);
    return (false);
}