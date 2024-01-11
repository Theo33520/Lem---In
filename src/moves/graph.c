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

t_node *new_node(int data)
{
    t_node *new_node_ptr = malloc(sizeof(t_node));
    new_node_ptr->data = data;
    new_node_ptr->arrow = NULL;
    new_node_ptr->next = NULL;
    return new_node_ptr;
}

t_arrow *built_arrow(t_node *arrived)
{
    t_arrow *new_arrow = malloc(sizeof(t_arrow));
    new_arrow->from_to = arrived;
    new_arrow->next = NULL;
    return new_arrow;
}

void append_arrow(t_node *here,t_node *from_to)
{
    t_arrow *new_arrow = built_arrow(from_to);
    new_arrow->next = here->arrow;
    here->arrow = new_arrow;
}

void print_my_graph(t_node *node[], int n)
{
    for (int i = 0; i < n;i++) {
        t_node *nodes = node[i];
        my_printf("[%i]:",nodes->data);
        t_arrow *arrows = nodes->arrow;
        while (arrows != NULL) {
            my_printf(" %i", arrows->from_to->data);
            arrows = arrows->next;
        }
        my_printf("\n");
    }
}

int loading_graph(t_list *list,t_ant *ant,t_beigin_from_to *list_tuple)
{
    int count = save_nb(list, &ant);
    t_node *n_node[count];
    t_ant *begin = ant;
    int start = begin->data;
    while (begin->next != NULL) {
        begin = begin->next;
    }
    int end = begin->data;
    for (int i = 0; i < count;i++) {
        n_node[i] = new_node(i);
    }
    t_beigin_from_to *tmp = NULL;
    tmp = list_tuple;
    while (tmp) {
        append_arrow(n_node[tmp->tuple.nb_start],n_node[tmp->tuple.nb_from_to]);
        append_arrow(n_node[tmp->tuple.nb_from_to],n_node[tmp->tuple.nb_start]);
        tmp = tmp->next;
    }
    print_my_graph(n_node,count);
}
