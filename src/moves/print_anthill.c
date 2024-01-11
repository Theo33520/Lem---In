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

void print_each_antill(t_list_ant *ant)
{
    t_list_ant *temp = NULL;
    temp = ant;
    while (temp) {
        my_printf("%s", temp->data);
        temp = temp->next;
    }
}

void print_each_ant(t_ant *ant)
{
    t_ant *tmp = NULL;
    tmp = ant ;
    while (tmp) {
        if (tmp->next != NULL)
            my_printf("[%i]->", tmp->data);
        else
            my_printf("[%i]",tmp->data);
        tmp = tmp->next;
    }
}
