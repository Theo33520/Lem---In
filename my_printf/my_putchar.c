/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** personal printf
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c ,1);
}
