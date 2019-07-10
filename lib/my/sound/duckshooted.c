/*
** EPITECH PROJECT, 2018
** duckshooted
** File description:
** 2018
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>

void duckshooted(sfMusic *bruh)
{
    bruh = sfMusic_createFromFile("src/bruh.wav");
    sfMusic_play(bruh);
    sfMusic_setVolume(bruh, 100);
}