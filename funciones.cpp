#include "funciones.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

void CantidadDeElectores(Persona Electores[], int indice)
{
    cout << endl;
    int TotalElectores, TotalHabSufragar, TotalVocalesMesa;
    TotalElectores = TotalHabSufragar = TotalVocalesMesa = 0;

    TotalElectores = indice - 1;
    for(int i = 0; i < indice; i++){
        if(Electores[i].getSufragar() == 1)
            TotalHabSufragar++;

        if(Electores[i].getVocal() == 1)
            TotalVocalesMesa++;
    }

    cout << "Total de electores: " << TotalElectores << endl;
    cout << "Total de habilitados para sufragar: " << TotalHabSufragar << endl;
    cout << "Total de vocales de mesa: " << TotalVocalesMesa << endl;
}

void ElectoresPorComuna(Persona Electores[], int indice)
{
    cout << endl;
    char Comuna[256];

	cout << "--------------------------------------" << endl;
	cout << "Ingrese la comuna que busca (En  mayúsculas, ej: LA CISTERNA): ";
	cin.getline(Comuna, 256);

	for(int i = 0; i < indice; i++){
		if(Comuna == Electores[i].getDireccion().getComuna())
			Electores[i].verPersona();
	}
}

void ConsultaDeDatos(Persona Electores[], int indice)
{
    cout << endl;
    int BuscarRun;

    cout << "--------------------------------------" << endl;
	cout << "Ingrese el RUN a buscar, SIN EL DV: ";
    cin >> BuscarRun;
	

    for(int i = 0; i < indice; i++){
		if(BuscarRun == Electores[i].getRut().getRunSdv())
			Electores[i].verPersona();
	}
}

void VotantesPorComunas(Persona Electores[], int indice)
{
    cout << endl;
    vector<string> Comunas;

    //Guardamos las comunas en el vector Comunas.
    for(int i = 0; i < indice; i++)
        Comunas.push_back(Electores[i].getDireccion().getComuna());

    //Mediante la librería SET borramos los duplicados en el vector de Comunas.
    set<string> string_set(Comunas.begin(), Comunas.end());
    Comunas.assign(string_set.begin(), string_set.end());

    //Imprimimos la cantidad de electores por comuna.
    for (unsigned i = 0, cont = 0; i < Comunas.size(); i++){
        for(int j = 0; j < indice; j++){
            if(Comunas.at(i) == Electores[j].getDireccion().getComuna()){
                cont++;
            }
        }

        cout << "<<" << Comunas.at(i) << ">>" << endl;
        cout << "Total de electoras: " << cont << endl;

        cont = 0;
    }
}

void VocalesDeMesa(Persona Electores[], int indice)
{
    cout << endl;
    vector<string> Comunas;

    //Guardamos las comunas en el vector Comunas.
    for(int i = 0; i < indice; i++)
        Comunas.push_back(Electores[i].getDireccion().getComuna());

    //Mediante la librería SET borramos los duplicados en el vector de Comunas.
    set<string> string_set(Comunas.begin(), Comunas.end());
    Comunas.assign(string_set.begin(), string_set.end());

    for (unsigned i = 0; i < Comunas.size(); i++){
        for(int j = 0; j < indice; j++){
            if(Comunas.at(i) == Electores[j].getDireccion().getComuna()){
                if(Electores[j].getVocal() == 1)
                    Electores[i].verPersona();
            }
        }
    }
}

void Menu(Persona Electores[], int indice)
{
    int Opcion;

    while(Opcion != 0){
        cout << "------------------------------" << endl;
        cout << "1.- Cantidad de electores" << endl;
        cout << "2.- Electores por comuna" << endl;
        cout << "3.- Consulta de Datos" << endl;
        cout << "4.- Votantes por comunas" << endl;
        cout << "5.- Vocales de Mesa" << endl;
        cout << "0.- Salir." << endl;
        cout << "------------------------------" << endl;
        cin >> Opcion;
        cin.ignore(5, '\n');

        switch (Opcion)
        {
        case 1:
            CantidadDeElectores(Electores, indice);
            break;
        case 2:
            ElectoresPorComuna(Electores, indice);
            break;
        case 3:
            ConsultaDeDatos(Electores, indice);
            break;
        case 4:
            VotantesPorComunas(Electores, indice);
            break;
        case 5:
            VocalesDeMesa(Electores, indice);
            break;
        default:
            cout << "Ingrese una opción válida." << endl;
            break;
        }
    }
}

void Lectura(Persona Electores[], int &indice)
{
    

    ifstream archivo;
    string lineaObtenida;
    string palabra;

    archivo.open("servel.txt", ios::in);
    
    if(archivo.fail()){
		cout << "Error: No se pudo abrir el archivo servel_pruebas.txt" << endl;
		exit(1);
	}
    
    while( getline(archivo, lineaObtenida, '\n')){
        //ahora recorremos la línea
        vector<string> data = split(lineaObtenida, ';');

        if(indice > 0) {

            /*
                RUT;DV;NOMBRES;PATERNO;MATERNO;NAC_DIA;NAC_MES;NAC_ANHO;DIRECCION;NRO;COMUNA;HABILITADO_SUFRAGAR;ES_VOCAL_MESA;NRO_MESA
            */
            string dv = data[1];
            Run RunAux(stol(data[0]), dv[0]);
            Electores[indice].setRut(RunAux);
            
            //cout << indice << endl;
            //RunAux.verRun();

            Nombres NombreAux(data[2], data[3], data[4]);
            Electores[indice].setNombre(NombreAux);

            Fecha FechaAux(stoi(data[5]), stoi(data[6]), stoi(data[7]));
            Electores[indice].setFecha(FechaAux);

            Direccion DireccionAux(data[8], stoi(data[9]), data[10]);
            Electores[indice].setDireccion(DireccionAux);

            Electores[indice].setSufragar(stoi(data[11]));
            Electores[indice].setVocal(stoi(data[12]));
            Electores[indice].setMesa(stoi(data[13]));

            Electores[indice].verPersona();
        }
        indice++;
    }

    archivo.close();
}

vector<string> split(string lineaASeparar, char delimitador) {
    vector<string> vector_interno;      //#include <vector>
    stringstream linea(lineaASeparar);  //#include <sstream>
    
    string parteDelString;

    while(getline(linea, parteDelString, delimitador))
        vector_interno.push_back(parteDelString);

    return vector_interno;
}
