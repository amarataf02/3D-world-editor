/*
** EPITECH PROJECT, 2021
** get_len_sfvector2f_matrix.c
** File description:
** get_len_sfvector2f_matrix.c
*/

#include <SFML/Graphics.h>

int get_len_sfvector2f_matrix(sfVector2f **matrix)
{
    int i = 0;

    if (!matrix)
        return (0);
    while (matrix[i]) {
        i++;
    }
    return (i);
}