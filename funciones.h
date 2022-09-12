#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <vector>
#include <set>

#include "persona.h"
#include "run.h"
#include "nombres.h"
#include "fecha.h"
#include "direccion.h"

using namespace std;

/* Implementa una función cuyos parámetros de entrada son un vector de
objetos y la cantidad de elementos del vector y realiza el procesamiento para
mostrar la cantidad de electores, total de personas habilitadas para votar y la
cantidad de vocales de mesa. */
void CantidadDeElectores(Persona [], int);

/* Implementa una función cuyos parámetros de entrada son un vector de
objetos, la cantidad de elementos del vector y una variable string que utilizará
para comparar por comunas y mostrar los datos ordenados de forma
ascendente. */
void ElectoresPorComuna(Persona [], int);

/* Implementa una función cuyos parámetros de entrada son un vector de
objetos, cantidad de elementos del vector y un valor que representará un rut
a comprar para entregar por pantalla todos los datos del elector. */
void ConsultaDeDatos(Persona [], int);

/* Implementa una función cuyos parámetros de entrada son un vector de
objetos y la cantidad de elementos del vector y realiza el procesamiento para
mostrar la cantidad total de electores por cada comuna. */
void VotantesPorComunas(Persona [], int);

/* Implementa una función cuyos parámetros de entrada son un vector de
objetos y la cantidad de elementos del vector, para mostrar el número de
votantes habilitados por cada comuna */
void VocalesDeMesa(Persona [], int);

void Menu(Persona [], int);

void Lectura(Persona [], int&);

vector<string> split(string, char);

#endif //FUNCIONES_H