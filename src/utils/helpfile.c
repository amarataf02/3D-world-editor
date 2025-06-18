/*
** EPITECH PROJECT, 2021
** helpfile.c
** File description:
** helpfile.c
*/

#include "c_functions.h"
#include "my_world_macros.h"

int helpfile(void)
{
    my_putstr("USAGE:\n");
    my_putstr("\t./my_world\n");
    my_putstr("\n");
    my_putstr("DESCRIPTION:\n");
    my_putstr("\tsomething\t\tdescription\n");
    my_putstr("\tsomething\t\tdescription\n");
    my_putstr("\tsomething\t\tdescription\n");
    return (SUCCESSFUL);
}