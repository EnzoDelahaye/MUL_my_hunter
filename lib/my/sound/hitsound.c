/*
** EPITECH PROJECT, 2018
** hitsound
** File description:
** 2018
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>

void hitsound(sfMusic *hit)
{
    hit = sfMusic_createFromFile("src/shot.wav");
    sfMusic_play(hit);
    sfMusic_setVolume(hit, 100);
}