/*
** EPITECH PROJECT, 2023
** lem in
** File description:
** main
*/

#include "../my_printf/my.h"
#include <unistd.h>
#include "../includes/lem_in.h"
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str)
{
    if (str == NULL)
        return 0;
    int i = 0;
    while (str[i] != '\0') {
        i += 1;
    }
    return i;
}
