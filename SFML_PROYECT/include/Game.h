#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Hielo.h"

using namespace std;

class Game
{
    public:
        sf::Sprite TtoS(char *rute,sf::Texture&);
        void Run(sf::RenderWindow&);
        bool menu = true;
    private:
        int FPS;

};

#endif // GAME_H
