#include "persona.h"

#include <iostream>

using namespace std;

Persona::Persona()
{
    
}

Persona::Persona(Run a, Nombres b, Fecha c, Direccion d, int e, int f, int g)
{
    SuRut = a;
    SuNombre = b;
    SuFecha = c;
    SuDireccion = d;
    Sufragar = e;
    Vocal = f;
    Mesa = g;
}

Persona::~Persona()
{
    //Destructor
}

void Persona::verPersona()
{
    cout << "-------------------------" << endl;
    
    SuRut.verRun();
    SuNombre.verNombres();
    SuFecha.verFecha();
    SuDireccion.verDireccion();
    
    cout << "Habilitado para sufragar: ";
    if(Sufragar == 1)
        cout << "Sí" << endl;
    else
        cout << "No" << endl;

    cout << "Vocal de Mesa: ";
    if(Vocal == 1)
        cout << "Sí" << endl;
    else
        cout << "No" << endl;

    cout << "Mesa: " << Mesa << endl;
}