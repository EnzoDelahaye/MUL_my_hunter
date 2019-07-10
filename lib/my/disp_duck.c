/*
** EPITECH PROJECT, 2018
** disp_duck
** File description:
** 2018
*/

#include <SFML/Graphics.h>
#include "../../include/libopenmy.h"

void disp_duck(sfRenderWindow *window, sfTexture *duck, 
                sfSprite *duck_moove, sfIntRect rect)
{
    sfSprite_setTexture(duck_moove, duck, sfTrue);
    sfSprite_setTextureRect(duck_moove, rect);
    sfRenderWindow_drawSprite(window, duck_moove, NULL);
    duck_anim(duck_moove);
}