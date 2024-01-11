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

int check_nb(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

void extract_values(char* str, int* value1, int* value2)
{
    int i = 0;
    int j = 0;
    char value_1[10];
    char value_2[10];
    while (str[i] != '-') {
        value_1[i] = str[i];
        i++;
    }
    value_1[i] = '\0';
    *value1 = my_getnbr(value_1);

    j = i + 1;
    while (str[j] != '\0') {
        value_2[j - i - 1] = str[j];
        j++;
    }
    value_2[j - i - 1] = '\0';
    *value2 = my_getnbr(value_2);
}
