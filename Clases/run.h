#ifndef RUN_H
#define RUN_H

/*
    RUT;DV;NOMBRES;PATERNO;MATERNO;NAC_DIA;NAC_MES;NAC_ANHO;DIRECCION;NRO;COMUNA;HABILITADO_SUFRAGAR;ES_VOCAL_MESA;NRO_MESA
*/

class Run
{
    private:
        long runSdv;
        char dv;
    public:
        Run();
        Run(long, char);
        ~Run();

        void setRunSdv(long x){runSdv = x;}
        void setDV(char x){dv = x;}
        
        long getRunSdv(){return runSdv;}
        char getDV(){return dv;}

        void verRun();
};

#endif //RUN_H