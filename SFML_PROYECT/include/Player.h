#ifndef PLAYER_H
#define PLAYER_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Bloque.h"
#include "colissiomboxes.h"

using namespace std;

class Player
{
    public:

        void Controls(sf::RenderWindow&,float , float,float,float);
        void Draw(sf::RenderWindow&,sf::Sprite&);
        void Move();
        float posx = (400);
        float posy = (400);
        float dx = 0.0,dy = 0.0;

        vector<Bloque> Disparos;
        int tam =  0;
        bool notblock = false;
    private:
        int sizeblock = 30;
        int setLimit(int&,int&);
        bool up = false;
        bool down = true;
        bool right = false;
        bool left = false;


};

#endif // PLAYER_H
