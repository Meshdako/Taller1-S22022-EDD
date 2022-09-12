#include "fecha.h"

#include <iostream>

using namespace std;

Fecha::Fecha()
{
    aa = 0;
    mm = 0;
    dd = 0;
}

Fecha::Fecha(int a, int b, int c)
{
    aa = a;
    mm = b;
    dd = c;
}

Fecha::~Fecha()
{
    //Destructor
}

void Fecha::verFecha()
{
    cout << "Cumpleaños: " << aa << "/" << mm << "/" << dd << endl;
}