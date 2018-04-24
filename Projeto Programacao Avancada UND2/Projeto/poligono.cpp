#include "poligono.h"
#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;



void Poligono::inserirvertices(float a, float b)
{
    vertices[numerovertices].setXY(a,b);
    numerovertices++;
}

int Poligono::numvertices()
{
    return numerovertices;
}

float Poligono::area()
{
    float a=0;

    for(int j=0; j+1<numerovertices; j++){
    a=a+vertices[j].getX()*vertices[j+1].getY();
    a=a-vertices[j+1].getX()*vertices[j].getY();
    }
    a=a+vertices[numerovertices-1].getX()*vertices[0].getY();
    a=a-vertices[0].getX()*vertices[numerovertices-1].getY();
    a=a/2.0;
    return a;
}

void Poligono::translada(float a, float b)
{
    for(int j=0; j<numerovertices ; j++){
        vertices[j].translada(a,b);
    }
}

void Poligono::rotacao(float a, float b, float c)
{
    a=(float)a*(M_PI/180);

    for(int j=0; j<numerovertices ; j++){
        vertices[j].translada(-b,-c);
    }

    for(int j=0; j<numerovertices ; j++){
        vertices[j].setXY(vertices[j].getX()*cos(a)-vertices[j].getY()*sin(a),vertices[j].getX()*sin(a)+vertices[j].getY()*cos(a));
    }

    for(int j=0; j<numerovertices ; j++){
        vertices[j].translada(b,c);
    }
}

void Poligono::imprimir()
{
    cout << " ";
    for(int j=0; j<numerovertices ; j++){

        vertices[j].imprimir();
          cout << " -> ";
    }

    vertices[0].imprimir();
}


