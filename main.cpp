#include <iostream>

/* Funciones */
#include "funciones.h"
#include "funciones.cpp"

/* Clases */
#include "Clases/persona.h"
#include "Clases/persona.cpp"
#include "Clases/run.h"
#include "Clases/run.cpp"
#include "Clases/nombres.h"
#include "Clases/nombres.cpp"
#include "Clases/fecha.h"
#include "Clases/fecha.cpp"
#include "Clases/direccion.h"
#include "Clases/direccion.cpp"

using namespace std;

/**
 * @brief 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */

int indice = 0;
Persona Electores[20];

int main(int argc, char **argv)
{
    //HelloWorld();

    Lectura(Electores, indice);

    Menu(Electores, indice);

    return 0;
}