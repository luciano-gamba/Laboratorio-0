#include "Informacion.h"

Informacion::Informacion(){
}

Informacion::Informacion(int id, int dia, int mes, int anio){
    this->identificador = id;
    this->Fecha.setfecha(dia,mes,anio);
}

Informacion::~Informacion(){
}

void Informacion::guardarEstudiante(Estudiante* quiereGuardar){
    this->GuardadaPor.insert(quiereGuardar);
}

DTFecha Informacion::getFecha(){
    return this->Fecha;
}