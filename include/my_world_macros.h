/*
** EPITECH PROJECT, 2021
** my_world_macros.h
** File description:
** my_world_macros.h
*/

#ifndef MY_WORLD_MACROS_
#define MY_WORLD_MACROS_

//RETURNS
#define ERROR 84
#define SUCCESSFUL 0

//UTILS
#define HELP_FLAG "-h"
#define ERROR_MESSAGE "[ERROR]: run ./my_world -h\n"
#define GAME_BACKGROUND "./src/img/backgrounds/game/background.jpg"
#define MENU_BACKGROUND "./src/img/backgrounds/menu/background.jpg"
#define W_WIDTH 1920
#define W_HEIGHT 1080
#define W_BPP 32
#define NUM_VERTEX_SQUARE 4
#define NUM_OPTIONS_GREEN_BUTTON 6

//BUTTONS
#define NUM_BUTTONS_MENU 2
//MENU_BUTTONS
#define B_MENU_WIDTH 250
#define B_MENU_HEIGHT 123
#define B_MENU_PLAY "./src/img/buttons/menu/b_play.png"
#define B_MENU_EXIT "./src/img/buttons/menu/b_exit.png"
//GAME_BUTTONS
#define NUM_BUTTONS_GAME 4
#define B_GAME_W_WIDTH 58
#define B_GAME_HEIGHT 58
#define B_GAME_DIAMETER 58
#define B_GAME_RADIUS 29
#define B_GAME_TEXTURE "./src/img/buttons/game/b_texture.png"
#define B_GAME_RESET "./src/img/buttons/game/b_reset.png"
#define B_GAME_HELP "./src/img/buttons/game/b_help.png"
#define B_GAME_EXIT "./src/img/buttons/game/b_exit.png"
#define POS_X_B_GAME (W_WIDTH - 80)
#define POS_Y_1_B_GAME ((W_HEIGHT / 2) - 75 - B_GAME_RADIUS)
#define POS_Y_2_B_GAME ((W_HEIGHT / 2) - B_GAME_RADIUS)
#define POS_Y_3_B_GAME ((W_HEIGHT / 2) + 75 - B_GAME_RADIUS)
#define POS_Y_4_B_GAME ((W_HEIGHT / 2) + 150 - B_GAME_RADIUS)

//TESTS DELETE
#define X_MAP 20
#define Y_MAP 15

//TEXTURE_MODE
#define ONE_VERTEX "./src/img/buttons/game/icons_texture/one_vertex.png"
#define FOUR_VERTEX "./src/img/buttons/game/icons_texture/four_vertex.png"
#define RIVER_TEXTURE "./src/img/buttons/game/icons_texture/river.png"
#define MOUNTAIN_TEXTURE "./src/img/buttons/game/icons_texture/mountain.png"
#define GRASS_TEXTURE "./src/img/buttons/game/icons_texture/grass.png"
#define GROUND_TEXTURE "./src/img/buttons/game/icons_texture/ground.jpg"
#define GRID_TEXTURES "./src/img/textures/sprites_my_world.jpg"
#define RED_SPHERE_TEXTURE "./src/img/textures/red_sphere.png"
#define GREEN_SPHERE_TEXTURE "./src/img/textures/green_sphere.png"

#endif /* !MY_WORLD_MACROS_ */