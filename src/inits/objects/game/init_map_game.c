/*
** EPITECH PROJECT, 2021
** init_map_game.c
** File description:
** init_map_game.c
*/

#include <SFML/Graphics.h>
#include "my_world.h"

sfConvexShape ***create_map_textures(sfVector2f **map, sfVector2i size)
{
    sfConvexShape ***texture_matrix = init_sfconvexshape_matrix(size);
    int i = 0;
    int j = 0;

    while (i < (size.y)) {
        while (j < (size.x)) {
            sfConvexShape_setPoint(texture_matrix[i][j], 0, map[i][j]);
            sfConvexShape_setPoint(texture_matrix[i][j], 1, map[i][j + 1]);
            sfConvexShape_setPoint(texture_matrix[i][j], 2, map[i + 1][j + 1]);
            sfConvexShape_setPoint(texture_matrix[i][j], 3, map[i + 1][j]);
            sfConvexShape_setFillColor(texture_matrix[i][j], sfTransparent);
            j++;
        }
        j = 0;
        i++;
    }
    return (texture_matrix);
}

void init_map_game(game_t *game, sfVector2i size_map)
{
    game->angle = (sfVector2i) {45, 35};
    game->size_map = size_map;
    game->d_map = init_int_matrix(size_map);
    game->map = create_2d_map(game->d_map, size_map, game->angle);
    game->zoom = 20;
    resize_map(game);
    game->size_px_map.x = get_map_width(game->map, game->size_map);
    game->size_px_map.y = get_map_height(game->map, game->size_map);
    game->dis_zero_to_rigth = game->map[0][game->size_map.x - 1].x;
    center_map(game);
    game->map_textures = create_map_textures(game->map,
    (sfVector2i){game->size_map.x - 1, game->size_map.y - 1});
}