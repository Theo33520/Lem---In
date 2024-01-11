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

int append_rooms(t_rooms **rooms,char *data)
{
    t_rooms *node = malloc(sizeof(t_rooms));
    if (node == NULL)
        return 84;
    t_rooms *current = *rooms;
    node->rooms = malloc(sizeof(char) * my_strlen(data) + 1);
    if (node->rooms == NULL) {
        free(node->rooms);
        return 84;
    }
    my_strcpy(node->rooms,data);
    node->next = NULL;
    if (*rooms == NULL)
        *rooms = node;
    else {
        while (current && current->next != NULL) {
            current = current->next;
        }
        current->next = node;
    }
}
