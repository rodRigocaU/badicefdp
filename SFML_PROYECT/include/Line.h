#ifndef LINE_H
#define LINE_H
#include <Game.h>


class Line
{
    public:
        Game Juego;
        float x,y,x1,y1,w;
        void Segment(float);
};

#endif // LINE_H
