/*
** EPITECH PROJECT, 2021
** create_2d_map
** File description:
** create_2d_map
*/

#include <SFML/System/Vector2.h>
#include <stdlib.h>
#include "my_world.h"
#include "my_world_structures.h"

sfVector2f **init_sfvector2f_martrix(sfVector2i size)
{
    int i = 0;
    int j = 0;
    sfVector2f **matrix = malloc(size.y * sizeof(sfVector2f *));

    if (!matrix)
        return (NULL);
    while (i < size.y) {
        matrix[i] = malloc(size.x * sizeof(sfVector2f));
        if (!matrix[i])
            return (NULL);
        while (j < size.x) {
            matrix[i]->x = 0;
            matrix[i]->y = 0;
            j++;
        }
        j = 0;
        i++;
    }
    return (matrix);
}

sfVector2f **create_2d_map(int **d_map, sfVector2i size, sfVector2i angle)
{
    int i = 0;
    int j = 0;
    sfVector2f **map = init_sfvector2f_martrix(size);

    while (i < size.y) {
        while (j < size.x) {
            map[i][j] = project_iso_point(j, i, d_map[i][j], angle);
            j++;
        }
        j = 0;
        i++;
    }
    return (map);
}