#include "Informacion.h"
#include "Estudiante.h"

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

int Informacion::getIDinfo(){
    return this->identificador;
}

set<Estudiante*> Informacion::apunta(){   
    return this->GuardadaPor;
}

void Informacion::borrarEstudiante(){
    for(Estudiante* est : this->GuardadaPor){
        est->borrarInfo(this);
    }
    this->GuardadaPor.clear();
}