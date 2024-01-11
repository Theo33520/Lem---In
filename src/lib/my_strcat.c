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
#include <string.h>
#include <stdbool.h>

char  *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int a = my_strlen(dest);
    while (src[i] != '\0') {
        dest[a + i] = src[i];
        i++;
    }
    dest[a + i] = '\0';
    return dest;
}
