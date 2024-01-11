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

int my_strncmp(char const *s1, char const *s2, int n)
{
    int idx = 0;
    int result = 0;
    while (s1[idx] != '\0' && s2[idx] != '\0' &&
    (s1[idx] == s2[idx]) && idx < n)
        idx += 1 ;
    result = (s1[idx] - s2[idx]);
    return result;
}
