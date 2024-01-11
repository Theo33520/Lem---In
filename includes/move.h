/*
** EPITECH PROJECT, 2023
** lem in
** File description:
** main
*/

#ifndef MOVE_H
    #define MOVE_H

    #include "lem_in.h"

typedef struct ant_s {
    int data;
    struct ant_s *next;
}t_ant;

typedef struct list_ant_s {
    char *data;
    struct list_ant_s *next;
}t_list_ant;

typedef struct value_s {
    int start;
    int end;
}t_value;

typedef struct node_s {
    int data;
    struct arrow_s *arrow;
    struct node_s *next;
}t_node;

typedef struct arrow_s {
    struct node_s *from_to;
    struct arrow *next;
}t_arrow;

typedef struct tuple_pos_s {
    int nb_start;
    int nb_from_to;
}t_tuple_pos;

typedef struct begin_from_to_s {
    t_tuple_pos tuple;
    struct begin_from_to_s *next;
}t_beigin_from_to;

void insert_ant(t_ant **ant,int data);
void print_each_ant(t_ant *ant);
void append_ant(t_list_ant **list_ant,char *data);
void print_each_antill(t_list_ant *ant);
int load_case(t_list *list,t_list_ant **ant);
int save_nb(t_list *list,t_ant **ant);
void charged_value(t_list *list,t_value *value);
int is_space(char c);
int check_nb(char c);
int insert_tuple(t_beigin_from_to **list_tuple,int begin,int end);
void append_tuple(t_beigin_from_to **tuple);
void extract_values(char* str, int* value1, int* value2);
void print_list_tuple(t_beigin_from_to *list);
void load_tunnel(t_list **list,t_beigin_from_to **list_tuple);
int parsing(t_list **list,t_beigin_from_to **list_tuple,t_ant *ant);
int loading_graph(t_list *list,t_ant *ant,t_beigin_from_to *list_tuple);
int load_moves_romms_empty(t_ant *ant,t_list *list,int count);
int load_move_rooms_one(t_ant *ant,t_list *list,int count);
#endif /*MOVE_H*/
