/*
** EPITECH PROJECT, 2018
** sound
** File description:
** 2018
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>

void playmusic(sfMusic *music)
{
    music = sfMusic_createFromFile("src/musique.ogg");
    sfMusic_play(music);
    sfMusic_setVolume(music, 20);
}