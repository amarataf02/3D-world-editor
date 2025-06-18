/*
** EPITECH PROJECT, 2021
** init_int_matrix.c
** File description:
** init_int_matrix.c
*/

#include <SFML/System/Vector2.h>
#include <stdlib.h>

int **init_int_matrix(sfVector2i size)
{
    int **matrix = malloc(size.y * sizeof(int *));
    int i = 0;
    int j = 0;

    if (!matrix)
        return (NULL);
    while (i < size.y) {
        matrix[i] = malloc(size.x * sizeof(int));
        if (!matrix[i])
            return (NULL);
        while (j < size.x) {
            matrix[i][j] = 0;
            j++;
        }
        j = 0;
        i++;
    }
    return (matrix);
}