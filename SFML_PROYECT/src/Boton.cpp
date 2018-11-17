#include "Boton.h"
#include <iostream>
#include <SFML/Graphics.hpp>

void Boton::Draw(sf::RenderWindow &app){
    int x=40,y=300;
    float Mx = sf::Mouse::getPosition().x;
    float My = sf::Mouse::getPosition().y;
    sf::RectangleShape boton(sf::Vector2f(x, y));
    if(float(posx)<Mx && Mx<float(posx)+200.f && float(posy)>My && My>float(posy)+80.f)boton.setFillColor(sf::Color::Red);
    else boton.setFillColor(sf::Color::Blue);
    boton.setPosition( 0,0 );
    app.draw(boton);
}
