/*
** EPITECH PROJECT, 2018
** disp_sprite
** File description:
** 2018
*/

#include <SFML/Graphics.h>

void disp_mouse(sfRenderWindow *window, sfTexture *mouse, sfSprite *mousetarget)
{
    sfSprite_setTexture(mousetarget, mouse, sfTrue);
    sfRenderWindow_drawSprite(window, mousetarget, NULL);
}