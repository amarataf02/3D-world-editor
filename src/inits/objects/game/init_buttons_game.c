/*
** EPITECH PROJECT, 2021
** init_buttons_game.c
** File description:
** init_buttons_game.c
*/

#include <stdlib.h>
#include "my_world.h"
#include "my_world_macros.h"
#include "my_world_structures.h"

button_circle_t **init_buttons_game(void)
{
    button_circle_t **buttons = malloc(sizeof(button_circle_t *) *
    (NUM_BUTTONS_GAME + 1));
    int i = 0;

    if (!buttons)
        return (NULL);
    buttons[0] = init_button_circle((sfVector2f) {POS_X_B_GAME, POS_Y_1_B_GAME},
    B_GAME_DIAMETER, &callback_game_texture, B_GAME_TEXTURE);
    buttons[1] = init_button_circle((sfVector2f) {POS_X_B_GAME, POS_Y_2_B_GAME},
    B_GAME_DIAMETER, &callback_game_reset, B_GAME_RESET);
    buttons[2] = init_button_circle((sfVector2f) {POS_X_B_GAME, POS_Y_3_B_GAME},
    B_GAME_DIAMETER, &callback_game_help, B_GAME_HELP);
    buttons[3] = init_button_circle((sfVector2f) {POS_X_B_GAME, POS_Y_4_B_GAME},
    B_GAME_DIAMETER, &callback_exit_button, B_GAME_EXIT);
    buttons[NUM_BUTTONS_GAME] = NULL;
    return (buttons);
}