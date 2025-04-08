#include "Informacion.h"

Informacion::Informacion(int id, int dia, int mes, int anio){
    this->identificador = id;
    this->Fecha.setfecha(dia,mes,anio);
}

Informacion::~Informacion(){
}

std::string Informacion::toString(){
    return("Esta es la informacion: "+this->identificador+'\n'+std::to_string(this->Fecha.getDia())+"/"+std::to_string(this->Fecha.getMes())+"/"+std::to_string(this->Fecha.getAnio())+"/");
}
