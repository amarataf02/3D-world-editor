/*
** EPITECH PROJECT, 2021
** free_array_intrect.c
** File description:
** free_array_intrect.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>

void free_array_intrect(sfIntRect **array_intrect)
{
    int i = 0;

    while (array_intrect[i]) {
        free(array_intrect[i]);
        i++;
    }
    free(array_intrect);
}