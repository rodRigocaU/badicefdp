#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <SFML/Graphics.hpp>


class Game
{
    public:

        void Run(sf::RenderWindow&);
        float e = 3.0;
        float r = -3.0;
        float u = 3.0;
        float h = -3.0;

    private:
        int FPS = 70;
};

#endif // GAME_H
