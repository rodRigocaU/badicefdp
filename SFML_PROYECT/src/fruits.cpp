#include "fruits.h"
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

void fruits::setpos(int x)
{
    posx = x*50;

}

void fruits::setpoy(int y)
{
        posy = y*50;
}

int fruits::getpos()
{
    return posx;

}

int fruits::getpoy()
{
        return posy;
}

