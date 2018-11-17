#ifndef COLISSIOMBOXES_H
#define COLISSIOMBOXES_H
#include <iostream>
#include <SFML/Graphics.hpp>


using namespace std;



class colissiomboxes
{
    public:

         sf::RectangleShape hitbox;
         float bottom, right, left, top;
        colissiomboxes(float positionx, float positiony, sf::Vector2f area, sf::Color);
        void refresh();
        void update(float x, float y, sf::Vector2f area, sf::Color);

};

#endif // COLISSIOM BOXES_H
