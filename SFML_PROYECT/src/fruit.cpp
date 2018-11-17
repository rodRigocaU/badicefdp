#include "fruit.h"
#include <iostream>
#include <random>
#include "time.h"
using namespace std;

fruit::fruit()
{
    x = 0;
    y = 0;
}


void fruit::setx ()
{
    x = rand() % 600;
}

void fruit::sety()
{
    y = rand() % 600;

}

float fruit::returnx()
{
    return x;
}

float fruit::returny()
{
    return y;
}


