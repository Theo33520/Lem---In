/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** disp characters of a string
*/

#include "my.h"
#include <stdlib.h>
int my_putstr(char const *str)
{
    int incrementor = 0 ;
    while (str[incrementor] != '\0'){
        my_putchar(str[incrementor]);
        incrementor++;
    } return 0;
}
