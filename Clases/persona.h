#ifndef PERSONA_H
#define PERSONA_H

#include "run.h"
#include "nombres.h"
#include "fecha.h"
#include "direccion.h"

/*
    RUT;DV;NOMBRES;PATERNO;MATERNO;NAC_DIA;NAC_MES;NAC_ANHO;DIRECCION;NRO;COMUNA;HABILITADO_SUFRAGAR;ES_VOCAL_MESA;NRO_MESA
*/

class Persona
{
private:
    Run SuRut;
    Nombres SuNombre;
    Fecha SuFecha;
    Direccion SuDireccion;
    int Sufragar;
    int Vocal;
    int Mesa;
public:
    Persona();
    Persona(Run, Nombres, Fecha, Direccion, int, int, int);
    ~Persona();

    void setRut(Run x){SuRut = x;}
    void setNombre(Nombres x){SuNombre = x;}
    void setFecha(Fecha x){SuFecha = x;}
    void setDireccion(Direccion x){SuDireccion = x;}
    void setSufragar(int x){Sufragar = x;}
    void setVocal(int x){Vocal = x;}
    void setMesa(int x){Mesa = x;}

    Run getRut(){return SuRut;}
    Nombres getNombre(){return SuNombre;}
    Fecha getFecha(){return SuFecha;}
    Direccion getDireccion(){return SuDireccion;}
    int getSufragar(){return Sufragar;}
    int getVocal(){return Vocal;}
    int getMesa(){return Mesa;}

    void verPersona();
};



#endif //PERSONA_H