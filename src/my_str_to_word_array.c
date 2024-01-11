/*
** EPITECH PROJECT, 2022
** my_str_to_word_array
** File description:
** task04
*/

#include <stdlib.h>
#include "lem_in.h"
#include <stdio.h>
#include <stdbool.h>

int carac_non_alpha(char c)
{
    if (c >= 32 && c < 39 || c >= 40 && c <= 44 || c == 47) {
        return 1;
    }
    return 0;
}

int carac_alpha(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int number_word(char const *str)
{
    int idx = 0;
    int jdx = 0;
    if (str == NULL) return 0;
    while (str[idx] != '\0') {
        if (carac_alpha(str[idx]) != 0 && carac_alpha(str[idx +1]) != 1) {
            jdx = jdx + 1;
        }
        idx = idx + 1;
    }
    return jdx;
}

int nbr_cara(char const *str)
{
    int idx = 0;
    while (str[idx] != '\0') {
        idx = idx + 1;
    }
    return idx;
}

char **my_str_to_word_array(char const *str)
{
    int idx = 0;
    int count_word = number_word(str);
    int index_word = 0;
    int index_letters = 0;
    bool is_here = false;
    char **tab = malloc(sizeof(char *) * number_word(str) + 1);
    while (index_word != count_word) {
        index_letters = 0;
        tab[index_word] = malloc(sizeof(char) * nbr_cara(str) + 1);
        while (str[idx] != '\0' && carac_alpha(str[idx]) == 1) {
            is_here = true;
            tab[index_word][index_letters] = str[idx];
            index_letters = index_letters + 1;
            idx = idx + 1;
        }  tab[index_word][index_letters] = '\0';
        while (str[idx] != '\0' && carac_alpha(str[idx]) == 0) {
            idx++;
        } if (is_here == true) index_word++;
    } return tab;
}
