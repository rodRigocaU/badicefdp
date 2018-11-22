#include "Game.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Hielo.h"
#include "fruits.h"

using namespace std;

sf::Sprite Game::TtoS(char *rute,sf::Texture &t){
    t.loadFromFile(rute);
    t.setSmooth(true);
    sf::Sprite s;
    s.setTexture(t);
    return s;
}


void Game::Run(sf::RenderWindow &app){
    sf::Texture ba;
    sf::Texture pl;
    sf::Texture ic;
    sf::Texture me;
    sf::Texture frut;
    sf::Font font;
    sf::Text cad_1;
    sf::Text cad_2;
    sf::String str;

    char *ice = "Images/bloque.png";
    char *bg = "Images/background.png";
    char *player = "Images/stand1.png";
    char *menu_S = "Images/menu.jpg";
    char *fruti = "Images/fruit.png";

    font.loadFromFile("Images/MAGNETOB.TTF");
    cad_1.setCharacterSize(20);
    cad_2.setCharacterSize(20);

    str = "PRESS E TO CONTINUE";
    cad_1.setString(str);
    cad_1.setFont(font);
    cad_1.setColor(sf::Color(207,216,215));
    cad_1.setPosition(225,500);

    str = "PRESS ESC TO EXIT";
    cad_2.setString(str);
    cad_2.setFont(font);
    cad_2.setColor(sf::Color(207,216,215));
    cad_2.setPosition(225,600);


    int nivel1[15][15] = {{9,9,9,9,9,9,9,9,9,9,9,9,9,9,9},
                          {9,1,0,0,0,0,0,0,0,0,0,0,0,0,9},
                          {9,0,0,0,0,0,0,0,0,0,0,0,0,0,9},
                          {9,0,0,0,0,0,0,0,0,0,0,0,0,0,9},
                          {9,0,0,0,0,0,1,1,1,1,0,0,0,0,9},
                          {9,0,0,0,1,0,0,0,0,0,0,1,0,0,9},
                          {9,0,0,0,1,0,0,0,0,0,0,1,0,0,9},
                          {9,0,0,0,1,0,0,0,0,0,0,1,0,0,9},
                          {9,0,0,0,1,0,0,0,0,0,0,1,0,0,9},
                          {9,0,0,0,0,1,2,0,0,0,0,0,0,0,9},
                          {9,0,0,0,0,0,1,1,1,1,0,0,0,0,9},
                          {9,0,0,0,0,0,0,1,1,0,0,0,0,0,9},
                          {9,0,0,0,0,0,0,0,0,0,0,0,0,0,9},
                          {9,1,0,0,0,0,0,0,0,0,1,0,0,0,9},
                          {9,9,9,9,9,9,9,9,9,9,9,9,9,9,9},};


        int frutita[15][15] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                          {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                          {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                          {0,3,0,0,0,0,0,0,0,0,0,0,3,0,0},
                          {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                          {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                          {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                          {0,3,0,0,0,0,0,0,0,0,0,0,0,0,0},
                          {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                          {0,0,0,0,0,0,0,0,0,0,0,0,3,0,0},
                          {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                          {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                          {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                          {0,0,0,3,0,0,0,3,0,0,0,0,0,3,0},
                          {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},};




    sf::Sprite Ice = TtoS(ice,ic);
    sf::Sprite Background = TtoS(bg,ba);
    sf::Sprite Icecream = TtoS(player,pl);
    sf::Sprite Menu = TtoS(menu_S,me);
    sf::Sprite fruta = TtoS(fruti,frut);

    Background.setPosition(50,50);
    Menu.setPosition(135,50);

    fruits fresa;
    Player helado(Icecream,nivel1);
    Hielo hielo(Ice);

    while(app.isOpen()){
        app.setFramerateLimit(FPS);
        app.clear(sf::Color (0,0,0));


        if(menu)
        {
            FPS = 5;
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::E)){cad_1.setColor(sf::Color(255,0,102)); menu = false;}
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){cad_2.setColor(sf::Color(255,0,102));app.draw(cad_2);app.display();app.close();}
            app.draw(Menu);
            app.draw(cad_1);
            app.draw(cad_2);
            app.display();
            sf::Event e;
            while(app.pollEvent(e)){
                if(e.type == sf::Event::Closed)
                    app.close();}

        }

        else{
        FPS = 60;
        app.clear(sf::Color (200,200,200));
        app.draw(Background);


        for(int y=1;y<14;y++){
            for(int x=1;x<14;x++){
                fresa.setpos(x);
                fresa.setpoy(y);
                if(nivel1[y][x]==2){
                    helado.Controls(app,nivel1);
                    helado.Draw(nivel1,x,y,app);
                }
                if(nivel1[y][x]==1){
                    hielo.Draw(nivel1,x,y,app);
                }
                if(frutita[y][x]==3){
                        fruta.setPosition(fresa.getpos(),fresa.getpoy());
                        app.draw(fruta);
                }
                if(nivel1[y][x]== 2 && frutita[y][x] == 3)
                {
                    frutita[y][x] = 0;
                }

            }
        }

        app.display();

        sf::Event e;
        while(app.pollEvent(e)){
            if(e.type == sf::Event::Closed)
                app.close();
        }

        }
    }
}
