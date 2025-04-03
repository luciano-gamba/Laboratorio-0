#include "Informacion.h"
#include <iostream>

Informacion::Informacion(int id, int dia, int mes, int anio){
    this->identificador = id;
    this->Fecha.dia = dia;
    this->Fecha.mes = mes;
    this->Fecha.anio = anio;
}

Informacion::~Informacion(){
}

string Informacion::toString(){
      return("Esta es la informacion: "+this->identificador+'\n'+std::to_string(this->Fecha.dia)+"/"+std::to_string(this->Fecha.mes)+"/"+std::to_string(this->Fecha.anio)+"/");
}
