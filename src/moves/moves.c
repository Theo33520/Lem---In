/*
** EPITECH PROJECT, 2023
** lem in
** File description:
** print_list
*/

#include "move.h"
#include <unistd.h>
#include "lem_in.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../my_printf/my.h"

int load_moves_romms_empty(t_ant *ant,t_list *list,int count)
{
    t_ant *tmp = ant;
    t_list *current = list;
    while (tmp->next) {
        tmp = tmp->next;
    }
    int end = tmp->data;
    int nb_ant = my_getnbr(current->data);
    for (int i = 1; i < nb_ant + 1;i++) {
        my_printf("P%i-%i\n",i,end);
    }
    return 0;
}

int load_move_rooms_one(t_ant *ant,t_list *list,int count)
{
    t_ant *tmp = ant;
    t_list *current = list;
    int nb_ant = my_getnbr(current->data);
    t_ant *prev = NULL;
    while (tmp->next) {
        if (ant != NULL) {
            prev = tmp;
            tmp = tmp->next;
        }
    }
    int end = tmp->data;
    int finish = prev->data;
    for (int i = 1; i < nb_ant + 1;i++) {
        my_printf("P%i-%i ",i,finish);
        my_printf("P%i-%i",i,end);
        my_printf("\n");
    }
}
