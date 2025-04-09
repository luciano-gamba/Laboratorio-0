#include "Libro.h"

Libro::Libro() {
}

Libro::Libro(int id, DTFecha fecha, string t, set<string> a, string r) {
    this->identificador = id;
    this->Fecha = fecha;
    this->titulo = t;
    this->autores = a;
    this->resumen = r;
}

Libro::~Libro() {
}

string Libro::toString(){
    return(to_string(this->identificador) + ", " + to_string(this->Fecha.getDia()) + ", " + to_string(this->Fecha.getMes()) + ", " + to_string(this->Fecha.getAnio()) + ", " + titulo + ", " + mostrarAutores() + ", " + resumen);
}
   
string Libro::mostrarAutores(){
    string listaAutores;
    for (set<string>::iterator it = autores.begin(); it != autores.end(); ++it) {
        listaAutores = listaAutores + ", " + *it;
    }
    return(listaAutores);
}
