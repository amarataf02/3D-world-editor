/*
** EPITECH PROJECT, 2021
** free_game.c
** File description:
** free_game.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my_world.h"
#include "my_world_macros.h"
#include "my_world_structures.h"

void free_sprite_spheres(sfSprite **red_spheres)
{
    int i = 0;

    while (red_spheres[i]) {
        sfSprite_destroy(red_spheres[i]);
        i++;
    }
    free(red_spheres);
}

void free_textures_spehres(sfTexture **textures)
{
    int i = 0;

    while (textures[i]) {
        sfTexture_destroy(textures[i]);
        i++;
    }
    free(textures);
}

void free_game(game_t *game)
{
    free_maps(game);
    free_buttons_game(game->game_buttons);
    sfSprite_destroy(game->background_sprite);
    sfTexture_destroy(game->background_texture);
    free_texture_map(game);
    free_array_sprites(game->sprite_mode);
    free_array_intrect(game->intrect_mode);
    free_sprite_spheres(game->red_spheres);
    free_textures_spehres(game->sphere_textures);
    sfTexture_destroy(game->grid_texture);
    free(game->vertex_selected);
    free(game);
}