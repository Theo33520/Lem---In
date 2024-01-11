/*
** EPITECH PROJECT, 2023
** lem in
** File description:
** lem_in.h
*/

#include "../includes/move.h"

#ifndef LEM_IN_H
    #define LEM_IN_H

    #define EXIT_SUCCESS 0

    typedef struct list_s {
        char *data;
        struct list_s *next;
    }t_list;

    typedef struct rooms_s {
        char *rooms;
        struct rooms_s *next;
    }t_rooms;

    typedef struct start_s {
        char *data;
        struct start_s *next;
    }t_start;

    typedef struct end_s {
        char *data;
        struct end_s *next;
    }t_end;

    typedef struct tunnel_s {
        char *data;
        struct tunnel_s *next;
    }t_tunnel;

/*fill_struct.c*/
int read_file(void);
int nbr_line_in_file(void);
int append_to_list(t_list **list);
void print_list(t_list *list);

/*linked.c*/
void insert_node(t_list **list, char *data);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);

/*display.c*/
int check_last_newline(t_list *list);

/*rooms.c*/
int append_rooms(t_rooms **rooms,char *data);

/*start.c*/
int append_start(t_start **start,char *data);

/*end*/
int append_end(t_end **end,char *data);

/*tunnel.c*/
int append_tunnel(t_tunnel **tunnel,char *data);

/*load_each_list.c*/
void load_rooms(t_list **list);
void load_start(t_list **list);
void load_end(t_list **list);

/*print_each_list.c*/
void print_rooms(t_rooms *rooms);
void print_start(t_start *start);
void print_end(t_end *end);
void print_tunnel(t_tunnel *tunnel);

/*lib*/
int my_strncmp(char const *s1, char const *s2, int n);
int my_strlen(char const *str);
char *my_my_strstr(char* str, char* start);
char *my_strcpy(char *dest, char const *src);
char  *my_strcat(char *dest, char const *src);
int my_getnbr(char const *str);
char **my_str_to_word_array(char const *str);
int number_word(char const *str);
int carac_alpha(char c);
#endif /*LEM_IN*/
