#include "Informacion.h"
#include "Estudiante.h"

Informacion::Informacion(){
}

Informacion::Informacion(int id, int dia, int mes, int anio){
    this->identificador = id;
    this->Fecha.setfecha(dia,mes,anio);
}

Informacion::~Informacion(){
    cout<<"Este es el id a borrar: " << this->identificador << endl;
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

set<Estudiante*> Informacion::getEstudiantes(){   
    return this->GuardadaPor;
}

void Informacion::borrarEstudiante(){
 set<Estudiante*> copia = GuardadaPor;

    for (set<Estudiante*>::iterator it = copia.begin(); it != copia.end(); ++it) {
        (*it)->borrarInfo(this);
    }

    copia.clear();
}