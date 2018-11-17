#ifndef BOTON_H
#define BOTON_H
#include <iostream>
#include <SFML/Graphics.hpp>

class Boton
{
    public:
        void Draw(sf::RenderWindow &app);

    private:
        int posx,posy;
        bool active = false;
};

#endif // BOTON_H
