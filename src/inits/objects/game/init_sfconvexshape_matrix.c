/*
** EPITECH PROJECT, 2021
** init_sfconvexshape_matrix.c
** File description:
** init_sfconvexshape_matrix.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my_world_macros.h"

sfConvexShape ***init_sfconvexshape_matrix(sfVector2i size)
{
    sfConvexShape ***matrix = malloc((size.y + 1) * sizeof(sfConvexShape **));
    int i = 0;
    int j = 0;

    if (!matrix)
        return (NULL);
    while (i < size.y) {
        matrix[i] = malloc(size.x * sizeof(sfConvexShape *));
        if (!matrix[i])
            return (NULL);
        while (j < size.x) {
            matrix[i][j] = sfConvexShape_create();
            sfConvexShape_setPointCount(matrix[i][j], NUM_VERTEX_SQUARE);
            j++;
        }
        j = 0;
        i++;
    }
    matrix[i] = NULL;
    return (matrix);
}