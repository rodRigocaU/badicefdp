#include "Line.h"
#include "Game.h"
#include <iostream>
#include <SFML/Graphics.hpp>

void Line::Segment(float w){

     sf::RectangleShape rectangulo(sf::Vector2f(w, y));
     rectangulo.setFillColor(sf::Color::Red);

}
