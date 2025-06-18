/*
** EPITECH PROJECT, 2021
** resize_sfvector2f_matrix.c
** File description:
** resize_sfvector2f_matrix.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my_world.h"

sfVector2f **resize_sfvector2f_matrix(sfVector2f **matrix)
{
    int len = get_len_sfvector2f_matrix(matrix);
    sfVector2f **new_matrix = malloc(sizeof(sfVector2f *) * (len + 2));
    int i = 0;

    while (matrix[i] != NULL) {
        new_matrix[i] = malloc(sizeof(sfVector2f));
        new_matrix[i]->x = matrix[i][0].x;
        new_matrix[i]->y = matrix[i][0].y;
        i++;
    }
    new_matrix[i] = NULL;
    new_matrix[i + 1] = NULL;
    free_sfvector2f_matrix(matrix);
    return (new_matrix);
}