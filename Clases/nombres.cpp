#include "nombres.h"

#include <iostream>

using namespace std;

Nombres::Nombres()
{
    Nombre = "";
    A_Paterno = "";
    A_Materno = "";
}

Nombres::Nombres(string A, string B, string C)
{
    Nombre = A;
    A_Paterno = B;
    A_Materno = C;
}

Nombres::~Nombres()
{
    //Destructor
}

void Nombres::verNombres()
{
    cout << "Nombres: " << Nombre << endl;
    cout << "Apellido Paterno: " << A_Paterno << endl;
    cout << "Apellido Materno: " << A_Materno << endl;
}