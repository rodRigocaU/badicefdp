#ifndef MENU_H
#define MENU_H
#include <SFML/Graphics.hpp>
#include "iostream"

using namespace std;

class Menu
{
    public:

        void startMenu(sf::RenderWindow&);
        bool ismenu = true;
    private:
        int FPS = 70;

};

#endif // MENU_H
