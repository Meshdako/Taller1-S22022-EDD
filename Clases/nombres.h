#ifndef NOMBRES_H
#define NOMBRES_H

#include <iostream>

using namespace std;

class Nombres
{
    private:
        string Nombre;
        string A_Paterno;
        string A_Materno;
    public:
        Nombres();
        Nombres(string, string, string);
        ~Nombres();

        void setNombre(string x){Nombre = x;}
        void setPaterno(string x){A_Paterno = x;}
        void setMaterno(string x){A_Materno = x;}

        string setNombre(){return Nombre;}
        string setPaterno(){return A_Paterno;}
        string setMaterno(){return A_Materno;}

        void verNombres();
};


#endif //NOMBRES_H