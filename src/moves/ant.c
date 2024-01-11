/*
** EPITECH PROJECT, 2023
** lem in
** File description:
** main
*/

#include "lem_in.h"
#include "move.h"
#include "../../my_printf/my.h"
#include <stdlib.h>
#include <string.h>

void insert_ant(t_ant **ant,int data)
{
    t_ant *new_ant = malloc(sizeof(t_ant));
    if (new_ant == NULL)
        return;
    new_ant->data = data;
    new_ant->next;
    if (*ant == NULL)
        *ant = new_ant;
    else {
        t_ant *current = *ant;
        while (current && current->next) {
            current = current->next;
        }
        current->next = new_ant;
    }
}

int is_space(char c)
{
    if (c == ' ')
        return 1;
    return 0;
}

void append_ant(t_list_ant **list_ant,char *data)
{
    t_list_ant *node = malloc(sizeof(t_list_ant));
    if (!node)
        return;
    node->data = malloc(sizeof(char) * my_strlen(data) + 1);
    if (!node->data) return;
    my_strcpy(node->data,data);
    node->next = NULL;
    if (*list_ant == NULL)
        *list_ant = node;
    else {
        t_list_ant *temp = *list_ant;
        while (temp && temp->next) {
            temp = temp->next;
        }
        temp->next = node;
    }
}

int load_case(t_list *list,t_list_ant **ant)
{
    t_list *tmp = list;
    t_list *new_tmp = tmp->next;
    while (new_tmp != NULL && (my_strstr(new_tmp->data,"-") == NULL)) {
        if (new_tmp->data[0] != '#')
            append_ant(ant,new_tmp->data);
        new_tmp = new_tmp->next;
    }
    return EXIT_SUCCESS;
}

int save_nb(t_list *list,t_ant **ant)
{
    t_list_ant *antill = NULL;
    load_case(list, &antill);
    t_list_ant *tmp = NULL;
    t_value *value = malloc(sizeof(t_value));
    charged_value(list,value);
    tmp = antill; int i = 0;
    int count = 0;
    while (tmp != NULL) { i = 0;
        while (!is_space(tmp->data[i])) {
            i++;
        } tmp->data[i] = '\0';
        if (tmp == antill) {
            insert_ant(ant,value->start); count++;
        } if (my_getnbr(tmp->data) != value->start &&
        my_getnbr(tmp->data) != value->end) {
            insert_ant(ant,my_getnbr(tmp->data));count++;
        } if (tmp->next == NULL) {
            insert_ant(ant,value->end); count++;
        } tmp = tmp->next;
    } free(value); return count;
}
