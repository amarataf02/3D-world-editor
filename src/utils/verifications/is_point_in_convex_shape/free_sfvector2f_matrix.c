/*
** EPITECH PROJECT, 2021
** free_sfvector2f_matrix.c
** File description:
** free_sfvector2f_matrix.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>

void free_sfvector2f_matrix(sfVector2f **matrix)
{
    int i = 0;

    while (matrix[i]) {
        free(matrix[i]);
        i++;
    }
    free(matrix);
}