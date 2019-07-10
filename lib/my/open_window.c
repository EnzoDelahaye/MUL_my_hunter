/*
** EPITECH PROJECT, 2018
** open_window
** File description:
** 2018
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../include/libopenmy.h"

void open_window(sfRenderWindow *window, sfTexture *texture, 
                sfSprite *sprite, sfEvent event)
{
    sfTexture *duck = sfTexture_createFromFile("src/spritesheet.png", NULL);
    sfSprite *duck_moove = sfSprite_create();
    sfIntRect rect = {0, 0, 110, 110};
    sfClock *clock = sfClock_create();
    sfMusic *music;
    int offset = 110;
    int max_value = 330;

    playmusic(music); 
    while (sfRenderWindow_isOpen(window)) {
        analyse_events(window, event, duck_moove);
        sfRenderWindow_clear(window, sfBlack);
        disp_sprite(window, texture, sprite);

        if (sfClock_getElapsedTime(clock).microseconds / 1000000.0 > 0.2) {
            move_rect(&rect, offset, max_value);
            sfClock_restart(clock);
        }
        disp_duck(window, duck, duck_moove, rect);
        sfRenderWindow_display(window);
    }
}

