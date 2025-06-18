/*
** EPITECH PROJECT, 2021
** init_objects_game.c
** File description:
** init_objects_game.c
*/

#include <SFML/Graphics.h>
#include <math.h>
#include <stdlib.h>
#include "my_world.h"
#include "my_world_macros.h"
#include "my_world_structures.h"

sfSprite **init_red_spheres(sfTexture **texture)
{
    sfSprite **red_spheres = malloc((NUM_VERTEX_SQUARE + 1) *
    sizeof(sfSprite *));
    int i = 0;

    while (i < NUM_VERTEX_SQUARE) {
        red_spheres[i] = sfSprite_create();
        sfSprite_setTexture(red_spheres[i], texture[0], 0);
        sfSprite_setColor(red_spheres[i], (sfColor) {255, 255, 255, 200});
        i++;
    }
    red_spheres[i] = NULL;
    return (red_spheres);
}

coord_t *init_vertex_selected(void)
{
    coord_t *vertex = malloc((NUM_VERTEX_SQUARE + 1) * sizeof(coord_t));
    int i = 0;

    while (i < NUM_VERTEX_SQUARE) {
        vertex[i] = (coord_t) {-1, -1};
        i++;
    }
    return (vertex);
}

sfTexture **init_sphere_textures(void)
{
    sfTexture **textures = malloc(3 * sizeof(sfTexture *));

    textures[0] = sfTexture_createFromFile(RED_SPHERE_TEXTURE, NULL);
    textures[1] = sfTexture_createFromFile(GREEN_SPHERE_TEXTURE, NULL);
    textures[2] = NULL;
    return (textures);
}

game_t *init_objects_game(sfVector2i size_map)
{
    game_t *game = malloc(sizeof(game_t));

    init_map_game(game, size_map);
    game->game_buttons = init_buttons_game();
    init_background_game(game);
    game->index_mode = 0;
    game->sprite_mode = init_sprite_mode();
    game->intrect_mode = init_intrect_mode();
    game->grid_texture = sfTexture_createFromFile(GRID_TEXTURES, 0);
    game->pressing_texture = false;
    game->vertex_pressed = false;
    game->vertex_selected = init_vertex_selected();
    game->sphere_textures = init_sphere_textures();
    game->red_spheres = init_red_spheres(game->sphere_textures);
    return (game);
}