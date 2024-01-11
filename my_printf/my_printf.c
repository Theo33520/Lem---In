/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** personal printf
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

void fonction_basic(char l, va_list element)
{
    if (l == 'c')
        my_putchar((char)va_arg(element, int));
    if (l == 's')
        my_putstr(va_arg(element, char *));
    if (l == 'i' || l == 'd')
        my_put_nbr(va_arg(element, int));
    if (l == '%')
        my_putchar('%');
    if (l == 'o')
        my_put_octec(va_arg(element,int));
    if (l == 'x')
        my_put_hexadecimal(va_arg(element,int));
    if (l == 'X')
        my_put_hexadecimal_maj(va_arg(element,int));

}

void my_printf(const char *format, ...)
{
    int idx = 0;
    va_list element;
    va_start(element, format);
    while (format[idx] != '\0') {
        if (format[idx] == '%') {
            fonction_basic(format[idx + 1], element);
            idx += 2;
        } else {
            my_putchar(format[idx]);
            idx += 1;
        }
    }
    va_end(element);
}
