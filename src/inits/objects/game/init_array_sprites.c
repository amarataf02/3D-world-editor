/*
** EPITECH PROJECT, 2021
** init_array_sprites.c
** File description:
** init_array_sprites.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my_world_macros.h"

sfSprite **init_array_sprites(int len, char **files)
{
    sfSprite **sprites = malloc((len + 1) * sizeof(sfSprite *));
    sfVector2f pos = (sfVector2f) {POS_X_B_GAME + (B_GAME_RADIUS - 10),
    POS_Y_1_B_GAME + (B_GAME_RADIUS - 10)};
    sfTexture *texture = NULL;
    int i = 0;

    while (i < len) {
        texture = sfTexture_createFromFile(files[i], NULL);
        sprites[i] = sfSprite_create();
        sfSprite_setPosition(sprites[i], pos);
        sfSprite_setTexture(sprites[i], texture, 0);
        i++;
    }
    sprites[i] = NULL;
    return (sprites);
}