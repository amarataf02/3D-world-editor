/*
** EPITECH PROJECT, 2021
** free_context.c
** File description:
** free_context.c
*/

#include <stdlib.h>
#include "my_world_structures.h"

void free_context(context_t *context)
{
    free(context->settings);
    free(context);
}