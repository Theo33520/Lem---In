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

int append_end(t_end **end,char *data)
{
    t_end *new_node = malloc(sizeof(t_end));
    t_end *tmp = *end;
    if (new_node == NULL) {
        return 84;
    }
    new_node->data = malloc(sizeof(char) * my_strlen(data) + 1);
    if (new_node->data == NULL) {
        free(new_node->data);
        return 84;
    }
    my_strcpy(new_node->data, data);
    new_node->next = NULL;
    if (*end == NULL)
        *end = new_node;
    else  {
        while (tmp != NULL && tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = new_node;
    }
}
