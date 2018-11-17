#include "Player.h"
#include <SFML/Graphics.hpp>
#include "Bloque.h"
#include <iostream>

using namespace std;

void Player::Controls(sf::RenderWindow &road, float e, float r, float u, float h){
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){road.close();}
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){dy += r;dx=0;up=true;down=left=right=false;}
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){dy += e;dx=0;down=true;up=left=right=false;}
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){dx += h;dy=0;left=true;down=up=right=false;}
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){dx += u;dy=0;right=true;down=left=up=false;}
    //if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space)){CreateBlock();}
    //if(sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)) {notblock = true;}
}

void Player::Draw(sf::RenderWindow &road,sf::Sprite &sprite){
    sprite.setPosition(posx,posy);
    road.draw(sprite);
}

void Player::Move(){
    posx += dx;
    posy += dy;
    dx = dy = 0;
}

int Player::setLimit(int &limit,int &i){if(limit == sizeblock)return (i>limit);else return (i<limit);}




