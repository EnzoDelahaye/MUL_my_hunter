/*
** EPITECH PROJECT, 2018
** duck_anim
** File description:
** 2018
*/

#include <SFML/Graphics.h>
#include <stdio.h>
#include "../../include/libopenmy.h"
#include <stdlib.h>

void duck_anim(sfSprite *duck_moove)
{
    sfVector2f move = {10, 0};
    sfVector2f pos = {0, (rand() % 500)};
    int width = 1280;
    int hp = 3;
    int die = 0;
    sfSprite_move(duck_moove, move);
    if (sfSprite_getPosition(duck_moove).x > width)
        sfSprite_setPosition(duck_moove, pos);

}