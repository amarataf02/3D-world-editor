/*
** EPITECH PROJECT, 2021
** init
** File description:
** init
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my_world_macros.h"
#include "my_world_structures.h"

context_t *init_context(void)
{
    context_t *context = malloc(sizeof(context_t));

    context->settings = malloc(sizeof(sfContextSettings));
    context->settings->antialiasingLevel = 8;
    context->settings->attributeFlags = 0;
    context->settings->depthBits = 0;
    context->settings->majorVersion = 4;
    context->settings->minorVersion = 0;
    context->settings->sRgbCapable = 0;
    context->settings->stencilBits = 0;
    context->video = (sfVideoMode) {W_WIDTH, W_HEIGHT, W_BPP};
    context->window = sfRenderWindow_create(context->video, "MY_WORLD",
    sfClose, context->settings);
    sfRenderWindow_setFramerateLimit(context->window, 70);
    return (context);
}