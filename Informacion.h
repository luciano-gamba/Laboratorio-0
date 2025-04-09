#ifndef INFORMACION_H
#define INFORMACION_H
#include <string>
#include "DTFecha.h"

class Informacion {
    public:
        Informacion(int id, int dia, int mes, int anio);
        virtual ~Informacion();
        virtual std::string toString() const = 0;
    protected:
        int identificador;
        DTFecha Fecha;
};

#endif /* INFORMACION_H */

