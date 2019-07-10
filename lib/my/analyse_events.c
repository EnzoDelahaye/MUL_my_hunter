/*
** EPITECH PROJECT, 2018
** analyse_events
** File description:
** 2018
*/

#include <SFML/Graphics.h>
#include <stdio.h>
#include <SFML/Audio.h>
#include "../../include/libopenmy.h"
#include <stdlib.h>

void analyse_events(sfRenderWindow *window, sfEvent event, sfSprite *duck_moove)
{
    int score;
    sfMusic *hit;
    sfMusic *bruh;
    sfVector2f pos = {0, (rand() % 500)};

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtMouseButtonPressed) {
            hitsound(hit);
            if (event.mouseButton.x > sfSprite_getPosition(duck_moove).x - 20 &&
                event.mouseButton.x < sfSprite_getPosition(duck_moove).x + 100 &&
                event.mouseButton.y > sfSprite_getPosition(duck_moove).y - 0 &&
                event.mouseButton.y < sfSprite_getPosition(duck_moove).y + 100) {
                sfSprite_setPosition(duck_moove, pos);
                duckshooted(bruh);
            }
        }
        else if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    }
}