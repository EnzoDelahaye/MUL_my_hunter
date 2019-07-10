/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** display characters of a string
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i;

    i = 0;
    while(str[i] !=  '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
