#include "Informacion.h"

Informacion::Informacion(int id, int dia, int mes, int anio){
    this->identificador = id;
    this->Fecha.setfecha(dia,mes,anio);
}

Informacion::~Informacion(){
}
    