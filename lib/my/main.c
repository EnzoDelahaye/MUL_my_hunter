/*
** EPITECH PROJECT, 2018
** main
** File description:
** 2018
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "../../include/libmy.h"
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    sfRenderWindow *window;
    sfVideoMode mode = {1280, 720, 32};
    sfTexture *texture;
    sfSprite *sprite;
    sfEvent event;

    window = sfRenderWindow_create(mode, "My_hunter", sfDefaultStyle, NULL);
    texture = sfTexture_createFromFile("src/background.jpg", NULL);
    sprite = sfSprite_create();
    sfRenderWindow_setFramerateLimit(window, 32);
    if (!window)
        exit (84);
    if (!texture)
        exit (84);
    if (ac == 2 && (av[1][0] == '-' && av[1][1] == 'h')) {
        descriptor();
        exit (84);
    }
    open_window(window, texture, sprite, event);
    sfRenderWindow_destroy(window);
    return(0);
}