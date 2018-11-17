#include "Game.h"
#include "Player.h"
#include "fruit.h"
#include "colissiomboxes.h"
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;


void Game::Run(sf::RenderWindow &road){

        sf::Texture ice_Clim;
        ice_Clim.loadFromFile("Imagenes/player.png");
        ice_Clim.setSmooth(true);
        sf::Sprite ice_ClIm;
        ice_ClIm.setTexture(ice_Clim);

        sf::Texture block;
        block.loadFromFile("Imagenes/bloque.png");
        block.setSmooth(true);
        sf::Sprite Block;
        Block.setTexture(block);
        Player player1;
        colissiomboxes player11(player1.posx, player1.posy, sf::Vector2f(50,50), sf::Color::Transparent);


        sf::Texture fruits;
        fruits.loadFromFile("Imagenes/fruit.png");
        fruits.setSmooth(true);
        sf::Sprite Fruit;
        Fruit.setTexture(fruits);

        //colissiomboxes fruit11;

        bool colission;
        fruit apple;
        apple.setx();
        apple.sety();
        Fruit.setPosition(apple.returnx(), apple.returny());
        colissiomboxes fruit11(apple.returnx(), apple.returny() , sf::Vector2f(50,50), sf::Color::Transparent);
        srand(time(NULL));
        while(road.isOpen())
        {


                colission = true;
                road.setFramerateLimit(FPS);
                road.clear(sf::Color(255,0, 0));
                player1.Controls(road,e,r,u,h);
                if(player1.posy <= 1)
                {
                    r = 0;
                }
                else
                {
                    r = -3.0;
                }
                if(player1.posx <= 1)
                {
                    h = 0;
                }
                else
                {
                    h = -3.0;
                }
                if(player1.posy >= 700)
                {
                    e = 0;
                }
                else
                {
                    e = 3.0;
                }
                if(player1.posx >= 750)
                {
                    u = 0;
                }
                else
                {
                    u = 3.0;
                }
                player11.update(player1.posx, player1.posy, sf::Vector2f(50,50), sf::Color::Transparent);
                player11.refresh();
                fruit11.refresh();

                if(player11.right < fruit11.left || player11.left > fruit11.right || player11.top > fruit11.bottom || player11.bottom < fruit11.top)
                {
                    colission = false;
                }
                if(colission == true)
                {
                    apple.setx();
                    apple.sety();
                    fruit11.update(apple.returnx(),apple.returny() , sf::Vector2f(50,50), sf::Color::Transparent);
                    Fruit.setPosition(apple.returnx(), apple.returny());
                }



                road.draw(player11.hitbox);
                road.draw(fruit11.hitbox);
                road.draw(Fruit);
                player1.Move();
                player1.Draw(road,ice_ClIm);
                road.display();


            sf::Event e;
            while(road.pollEvent(e))
            {
                if(e.type == sf::Event::Closed)
                    road.close();
            }
        }
}
