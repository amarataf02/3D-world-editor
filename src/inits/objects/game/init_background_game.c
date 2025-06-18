/*
** EPITECH PROJECT, 2021
** init_background_game.c
** File description:
** init_background_game.c
*/
#include <SFML/Graphics.h>
#include "my_world.h"
#include "my_world_macros.h"

void init_background_game(game_t *game)
{
    game->background_texture = sfTexture_createFromFile(GAME_BACKGROUND, NULL);
    game->background_sprite = sfSprite_create();
    sfSprite_setTexture(game->background_sprite, game->background_texture, 0);
}