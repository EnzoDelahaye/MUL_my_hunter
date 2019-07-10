/*
** EPITECH PROJECT, 2018
** libopenmy
** File description:
** 2018
*/

#include <SFML/Audio.h>
#ifndef LIBOPENMY_H_
#define LIBOPENMY_H_

void analyse_events(sfRenderWindow *window, sfEvent event, sfSprite *duck_moove);
void disp_sprite(sfRenderWindow *window, sfTexture *texture, sfSprite *sprite);
void disp_duck(sfRenderWindow *window, sfTexture *duck, sfSprite *duck_moove, sfIntRect rect);
void disp_mouse(sfRenderWindow *window, sfTexture *mouse, sfSprite *mousetarget);
void move_rect(sfIntRect *rect, int offset, int max_value);
void duck_anim(sfSprite *duck_moove);
void playmusic(sfMusic *music);
void hitsound(sfMusic *hit);
void duckshooted(sfMusic *bruh);



#endif /* !LIBOPENMY_H_ */
