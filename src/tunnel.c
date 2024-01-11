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

int append_tunnel(t_tunnel **tunnel,char *data)
{
    t_tunnel *node = malloc(sizeof(t_tunnel));
    t_tunnel *tmp = *tunnel;
    if (node == NULL) {
        return 84;
    }
    node->data = malloc(sizeof(char) * my_strlen(data) + 1);
    if (node->data == NULL) {
        free(node->data);
        return 84;
    }
    my_strcpy(node->data, data);
    node->next = NULL;
    if (*tunnel == NULL)
        *tunnel = node;
    else  {
        while (tmp != NULL && tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = node;
    }
}
