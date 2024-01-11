/*
** EPITECH PROJECT, 2023
** lem in
** File description:
** main
*/

#include "move.h"
#include "lem_in.h"
#include "../my_printf/my.h"
#include <stdlib.h>
#include <string.h>

int insert_tuple(t_beigin_from_to **list_tuple,int begin,int end)
{
    t_beigin_from_to *new_tuple = malloc(sizeof(t_beigin_from_to));
    if (!new_tuple) return 84;
    new_tuple->tuple.nb_start = begin;
    new_tuple->tuple.nb_from_to = end;
    new_tuple->next = NULL;
    if (*list_tuple == NULL)
        *list_tuple = new_tuple;
    else {
        t_beigin_from_to *tmp = *list_tuple;
        while (tmp && tmp->next) {
            tmp = tmp->next;
        }
        tmp->next = new_tuple;
    }
}

void append_tuple(t_beigin_from_to **tuple)
{
    int begin = 0;
    int end = 10;
    insert_tuple(tuple,begin,end);
}

void print_list_tuple(t_beigin_from_to *list)
{
    t_beigin_from_to *tmp = list;
    while (tmp) {
        my_printf("[%i,%i]\n", tmp->tuple.nb_start,tmp->tuple.nb_from_to);
        tmp = tmp->next;
    }
}
