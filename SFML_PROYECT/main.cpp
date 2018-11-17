#include <iostream>
#include <SFML/Graphics.hpp>
#include "Game.h"

using namespace std;

int const widthscreen = 800;
int const heightscreen = 800;

int main()
{
    sf::RenderWindow road(sf::VideoMode(widthscreen,heightscreen),"Bad Ice");
    Game ice;
    ice.Run(road);
    return 0;

}

