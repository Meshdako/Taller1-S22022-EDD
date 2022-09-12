#include <iostream>

#include "funciones.h"
#include "funciones.cpp"
#include "persona.h"
#include "persona.cpp"
#include "run.h"
#include "run.cpp"
#include "nombres.h"
#include "nombres.cpp"
#include "fecha.h"
#include "fecha.cpp"
#include "direccion.h"
#include "direccion.cpp"

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