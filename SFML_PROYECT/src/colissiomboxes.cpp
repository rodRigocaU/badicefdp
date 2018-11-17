#include "colissiomboxes.h"
#include <SFML/Graphics.hpp>

colissiomboxes::colissiomboxes(float positionx, float positiony,sf::Vector2f area,  sf::Color color)
{
    hitbox.setPosition(positionx,positiony);
    hitbox.setSize(area);
    hitbox.setFillColor(color);
}

void colissiomboxes::refresh()
{
    bottom = hitbox.getPosition().y + hitbox.getSize().y;
    left = hitbox.getPosition().x;
    right = hitbox.getPosition().x  + hitbox.getSize().x;
    top = hitbox.getPosition().y;

}

void colissiomboxes::update(float positionx, float positiony,sf::Vector2f area,  sf::Color color)
{
    hitbox.setPosition(positionx,positiony);
    hitbox.setSize(area);
    hitbox.setFillColor(color);
}
