#ifndef ENEMIGO_H
#define ENEMIGO_H
#include "Objeto.h"
#include "Player.h"
#include <SFML/Graphics.hpp>
class Enemigo : public Objeto
{
    public:
        Enemigo(sf::Sprite &, int, int);
        void Mover();
        void Draw();
        int Punto();

    private:
        sf::Sprite s;
        int posx;
        int posy;
        bool Colision(int m[15][15],Player &);
};

#endif // ENEMIGO_H
