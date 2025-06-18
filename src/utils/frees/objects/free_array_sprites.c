/*
** EPITECH PROJECT, 2021
** free_array_sprites.c
** File description:
** free_array_sprites.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>

void free_array_sprites(sfSprite **array_sprites)
{
    int i = 0;

    while (array_sprites[i]) {
        sfTexture_destroy((sfTexture *)sfSprite_getTexture(array_sprites[i]));
        sfSprite_destroy(array_sprites[i]);
        i++;
    }
    free(array_sprites);
}