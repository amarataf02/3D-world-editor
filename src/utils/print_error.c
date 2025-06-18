/*
** EPITECH PROJECT, 2021
** print_error.c
** File description:
** print_error.c
*/

#include <unistd.h>
#include "c_functions.h"
#include "my_world_macros.h"

int print_error(char *error_message)
{
    write(2, error_message, my_strlen(error_message));
    return (ERROR);
}