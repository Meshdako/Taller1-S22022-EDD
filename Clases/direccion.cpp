#include "direccion.h"

#include <iostream>

using namespace std;

Direccion::Direccion()
{
    Calle = "";
    Nro = 0;
    Comuna = "";
}

Direccion::Direccion(string a, int b, string c)
{
    Calle = a;
    Nro = b;
    Comuna = c;
}

Direccion::~Direccion()
{
    //Destructor
}

void Direccion::verDireccion()
{
    cout << "Dirección: " << Calle << ", #" << Nro << ", " << Comuna << endl;
}