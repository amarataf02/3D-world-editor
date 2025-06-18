/*
** EPITECH PROJECT, 2021
** init_objects_menu.c
** File description:
** init_objects_menu.c
*/

#include <SFML/System/Vector2.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my_world.h"
#include "my_world_macros.h"
#include "my_world_structures.h"

button_rect_t *init_button_rect(sfVector2f pos, sfVector2f size,
void(*ptr), char *path)
{
    button_rect_t *button = malloc(sizeof(button_rect_t));
    sfTexture *texture = sfTexture_createFromFile(path, NULL);

    if (!button)
        return (NULL);
    button->rect = sfRectangleShape_create();
    sfRectangleShape_setPosition(button->rect, pos);
    sfRectangleShape_setSize(button->rect, size);
    sfRectangleShape_setTexture(button->rect, texture, 0);
    button->callback = ptr;
    return (button);
}

button_rect_t **init_buttons_menu(void)
{
    button_rect_t **buttons = malloc(sizeof(button_rect_t *) *
    (NUM_BUTTONS_MENU + 1));
    int i = 0;

    if (!buttons)
        return (NULL);
    buttons[0] = init_button_rect((sfVector2f) {(W_WIDTH / 2) -
    (B_MENU_WIDTH / 2), (W_HEIGHT / 2) - (B_MENU_HEIGHT / 2) - B_MENU_HEIGHT},
    (sfVector2f) {B_MENU_WIDTH, B_MENU_HEIGHT},
    &callback_play_button, B_MENU_PLAY);
    buttons[1] = init_button_rect((sfVector2f) {(W_WIDTH / 2) -
    (B_MENU_WIDTH / 2), (W_HEIGHT / 2) - (B_MENU_HEIGHT / 2) + B_MENU_HEIGHT},
    (sfVector2f) {B_MENU_WIDTH, B_MENU_HEIGHT},
    &callback_exit_button, B_MENU_EXIT);
    buttons[NUM_BUTTONS_MENU] = NULL;
    return (buttons);
}

menu_t *init_objects_menu(void)
{
    menu_t *menu = malloc(sizeof(menu_t));

    menu->menu_buttons = init_buttons_menu();
    menu->background_texture = sfTexture_createFromFile(MENU_BACKGROUND, NULL);
    menu->background_sprite = sfSprite_create();
    sfSprite_setTexture(menu->background_sprite, menu->background_texture, 0);
    return (menu);
}