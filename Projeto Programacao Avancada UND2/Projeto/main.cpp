#include <iostream>
#include "Point.h"
#include "poligono.h"
#include "retangulo.h"
using namespace std;

int main()
{
Retangulo a(0,0,4,3);
a.imprimir();
cout <<endl<< " => Area::  " << a.area() << endl << endl
<< "Translada..." << endl;
a.translada(-3,4);
a.imprimir();
cout << endl << " => Area::  " << a.area() << endl << endl
<< "Rotacionando..." << endl;
a.rotacao(30, -1, 1.5 );
a.imprimir();
cout << endl << " => Area::  " << a.area() << endl << endl;

    return 0;
}
