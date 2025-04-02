#ifndef INFORMACION_H
#define INFORMACION_H
#include <string>
using namespace std;

struct DTFecha_{
    int dia;
    int mes;
    int anio;
}DTFecha;

class Informacion {
public:
    Informacion(int id, int dia, int mes, int anio);
    virtual ~Informacion();
    virtual std::string toString();
protected:
    int identificador;
    DTFecha_ Fecha;
};

#endif /* INFORMACION_H */

