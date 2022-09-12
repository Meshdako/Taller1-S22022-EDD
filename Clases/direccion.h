#ifndef DIRECCION_H
#define DIRECCION_H

#include <iostream>

using namespace std;

/*
    RUT;DV;NOMBRES;PATERNO;MATERNO;NAC_DIA;NAC_MES;NAC_ANHO;DIRECCION;NRO;COMUNA;HABILITADO_SUFRAGAR;ES_VOCAL_MESA;NRO_MESA
*/

class Direccion
{
    private:
        string Calle;
        int Nro;
        string Comuna;
    public:
        Direccion();
        Direccion(string, int, string);
        ~Direccion();

        void setCalle(string x){Calle = x;}
        void setNro(int x){Nro = x;}
        void setComuna(string x){Comuna = x;}

        string getCalle(){return Calle;}
        int getNro(){return Nro;}
        string getComuna(){return Comuna;}

        void verDireccion();
};

#endif //DIRECCION_H