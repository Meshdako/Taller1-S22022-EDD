#ifndef FECHA_H
#define FECHA_H

/*
    RUT;DV;NOMBRES;PATERNO;MATERNO;NAC_DIA;NAC_MES;NAC_ANHO;DIRECCION;NRO;COMUNA;HABILITADO_SUFRAGAR;ES_VOCAL_MESA;NRO_MESA
*/

class Fecha
{
private:
    /* data */
    int aa;
    int mm;
    int dd;
public:
    Fecha();
    Fecha(int, int, int);
    ~Fecha();

    void setAnho(int x){aa = x;}
    void setMes(int x){mm = x;}
    void setDia(int x){dd = x;}
    
    int getAnho(){return aa;}
    int getMes(){return mm;}
    int getDia(){return dd;}

    void verFecha();
};

#endif //FECHA_H