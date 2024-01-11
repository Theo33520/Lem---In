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

void insert_node(t_list **list, char *data)
{
    t_list *new_node = malloc(sizeof(t_list));
    t_list *tmp = *list;
    if (new_node == NULL) {
        return;
    }
    new_node->data = malloc(sizeof(char) * my_strlen(data) + 1);
    if (new_node->data == NULL) {
        free(new_node->data);
        return;
    }
    my_strcpy(new_node->data, data);
    new_node->next = NULL;
    if (*list == NULL)
        *list = new_node;
    else  {
        while (tmp != NULL && tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = new_node;
    }
}

void print_list(t_list *list)
{
    t_list *current = NULL;
    current = list;
    while (current != NULL) {
        my_printf("%s", current->data);
        current = current->next;
    }
}
