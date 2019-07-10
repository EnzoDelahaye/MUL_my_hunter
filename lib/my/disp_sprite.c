/*
** EPITECH PROJECT, 2018
** disp_sprite
** File description:
** 2018
*/

#include <SFML/Graphics.h>

void disp_sprite(sfRenderWindow *window, sfTexture *texture, sfSprite *sprite)
{
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}