#include "Bloque.h"
#include <iostream>
#include <SFML/Graphics.hpp>

void Bloque::Draw(sf::RenderWindow &road,sf::Sprite &sprite){
    sprite.setPosition(posx,posy);
    road.draw(sprite);
}
