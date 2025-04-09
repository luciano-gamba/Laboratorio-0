#ifndef INFORMACION_H
#define INFORMACION_H
#include <string>
#include "DTFecha.h"
using namespace std;

class Estudiante;

class Informacion {
    public:
        Informacion();
        Informacion(int id, int dia, int mes, int anio);
        virtual ~Informacion();
        virtual string toString() = 0;
    protected:
        int identificador;
        DTFecha Fecha;
};

#endif /* INFORMACION_H */
