/*
** EPITECH PROJECT, 2021
** draw_2d_map.c
** File description:
** draw_2d_map.c
*/

#include <SFML/Graphics.h>
#include "my_world.h"
#include "my_world_structures.h"

void draw_x_lines(sfRenderWindow *window, objects_t *objects)
{
    int i = 0;
    int j = 0;
    sfVertexArray *line = NULL;

    while (i < objects->game->size_map.y) {
        while (j < (objects->game->size_map.x - 1)) {
            line = create_line(&objects->game->map[i][j],
            &objects->game->map[i][j + 1]);
            sfRenderWindow_drawVertexArray(window, line, 0);
            sfVertexArray_destroy(line);
            j++;
        }
        j = 0;
        i++;
    }
}

void draw_y_lines(sfRenderWindow *window, objects_t *objects)
{
    int i = 0;
    int j = 0;
    sfVertexArray *line = NULL;

    while (i < objects->game->size_map.x) {
        while (j < (objects->game->size_map.y - 1)) {
            line = create_line(&objects->game->map[j][i],
            &objects->game->map[j + 1][i]);
            sfRenderWindow_drawVertexArray(window, line, 0);
            sfVertexArray_destroy(line);
            j++;
        }
        j = 0;
        i++;
    }
}

void draw_2d_map(sfRenderWindow *window, objects_t *objects)
{
    draw_x_lines(window, objects);
    draw_y_lines(window, objects);
}