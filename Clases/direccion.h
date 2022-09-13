#ifndef DIRECCION_H
#define DIRECCION_H

#include <iostream>

//using namespace std;

/*
    RUT;DV;NOMBRES;PATERNO;MATERNO;NAC_DIA;NAC_MES;NAC_ANHO;DIRECCION;NRO;COMUNA;HABILITADO_SUFRAGAR;ES_VOCAL_MESA;NRO_MESA
*/

class Direccion
{
    private:
        std::string Calle;
        int Nro;
        std::string Comuna;
    public:
        Direccion();
        Direccion(std::string, int, std::string);
        ~Direccion();

        void setCalle(std::string x){Calle = x;}
        void setNro(int x){Nro = x;}
        void setComuna(std::string x){Comuna = x;}

        std::string getCalle(){return Calle;}
        int getNro(){return Nro;}
        std::string getComuna(){return Comuna;}

        void verDireccion();
};

#endif //DIRECCION_H