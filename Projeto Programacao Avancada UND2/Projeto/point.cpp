#include <iostream>
#include "Point.h"
#include <cmath>

using namespace std;

Point::Point(float _x, float _y)
{
    x = _x;
    y = _y;
}

void Point::setX(float _x)
{
    x=_x;
}

void Point::setY(float _y)
{
    y=_y;
}

void Point::setXY(float _x, float _y)
{
    x=_x;
    y=_y;
}

float Point::getX()
{
    return x;
}

float Point::getY()
{
    return y;
}

Point Point::add(Point p1)
{
    Point aux;

    aux.x = x + p1.x;
    aux.y = y + p1.y;

    return aux;
}

Point Point::sub(Point p1)
{
    Point aux;

    aux.x = x - p1.x;
    aux.y = y - p1.y;

    return aux;
}

float Point::norma()
{
    return(sqrt(x*x+y*y));
}

void Point::translada(float a, float b)
{
    x = x + a;
    y = y + b;
}

void Point::imprimir()
{
    cout << "("<< x << ","<< y <<")";
}

