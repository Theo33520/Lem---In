/*
** EPITECH PROJECT, 2023
** lem in
** File description:
** loading_linked_list
*/

#include "../my_printf/my.h"
#include <unistd.h>
#include "lem_in.h"
#include "move.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void load_rooms(t_list **list)
{
    t_list *tmp = *list;
    t_list *current = tmp->next;
    t_rooms *rooms = NULL;
    int len = my_strlen("##start") - 1 ;
    while (current->next && my_strncmp(current->data,"##start",len) != 0) {
        append_rooms(&rooms,current->data);
        current = current->next;
    }
    print_rooms(rooms);

}

void load_start(t_list **list)
{
    t_list *tmp = *list;
    t_list *current = tmp->next;
    t_start *start = NULL;
    t_ant *ant = NULL;
    int len = my_strlen("##start") - 1;
    while (current->next) {
        if (my_strncmp(current->data,"##start",len) == 0) {
            append_start(&start,current->next->data);
            break;
        }
        current = current->next;
    }
    print_start(start);
}

void load_end(t_list **list)
{
    t_list *tmp = *list;
    t_list *current = tmp->next;
    t_end *end = NULL;
    int len = my_strlen("##start") - 1;
    while (current->next) {
        if (my_strncmp(current->data,"##start", len) == 0) {
            t_list *temp = current->next->next;
            while (temp != NULL && my_strstr(temp->data,"-") == NULL) {
                append_end(&end,temp->data);
                temp = temp->next;
            }
        }
        current = current->next;
    }
    print_end(end);
}

void load_tunnel(t_list **list, t_beigin_from_to **tuple)
{
    t_list *tmp = *list;
    t_tunnel *tunnel = NULL;
    while (tmp != NULL) {
        if (my_strstr(tmp->data, "-") != NULL) {
            int value1, value2;
            extract_values(tmp->data, &value1, &value2);
            insert_tuple(tuple, value1, value2);
            append_tunnel(&tunnel, tmp->data);
        }
        tmp = tmp->next;
    }
    print_tunnel(tunnel);
}
