/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** Main Function
*/

#include "c_functions.h"
#include "my_world.h"
#include "my_world_macros.h"

bool is_help_flag(int argc, char **argv)
{
    if (argc == 2 && my_strcmp(argv[1], HELP_FLAG) == 0)
        return (true);
    return (false);
}

int main(int argc, char **argv)
{
    if (is_help_flag(argc, argv))
        return (helpfile());
    return (my_world());
}