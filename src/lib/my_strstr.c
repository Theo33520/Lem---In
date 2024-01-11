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

char *my_strstr(char* str, char* start)
{
    if (str == NULL || start == NULL)
        return NULL;
    char *new_str = str;
    char *new_start = start;
    char *tmp = NULL;
    int i = 0;
    int j = 0;
    while (new_str[i] != '\0') {
        tmp = new_str;
        while (tmp[i] == new_start[j] && tmp[i] != '\0'
        && new_start[j] != '\0') {
            i++;
            j++;
        }
        if (new_start[j] == '\0')
            return &new_str[i - j];
        j = 0;
        i++;
    }
    return NULL;
}
