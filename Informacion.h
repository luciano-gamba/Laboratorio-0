#ifndef INFORMACION_H
#define INFORMACION_H
#include <string>
#include "DTFecha.h"
#include <set>
using namespace std;

class Estudiante;

class Informacion {
    public:
        Informacion();
        Informacion(int id, int dia, int mes, int anio);
        virtual ~Informacion();
        virtual string toString() = 0;
        DTFecha getFecha();
        int getIDinfo();
        void guardarEstudiante(Estudiante* quiereGuardar);
        set<Estudiante*> apunta();
        void borrarEstudiante();
    protected:
        int identificador;
        DTFecha Fecha;
        set<Estudiante*> GuardadaPor;  //Pseudoatributo
};

#endif /* INFORMACION_H */
