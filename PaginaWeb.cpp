#include "PaginaWeb.h"


PaginaWeb::PaginaWeb() {
}

PaginaWeb::PaginaWeb(int id, DTFecha fecha, std::string t, std::string l, std::string text) {
    this->identificador = id;
    this->Fecha = fecha;
    this->titulo = t;
    this->link = l;
    this->text = text;
}

PaginaWeb::~PaginaWeb() {
}

string PaginaWeb::toString(){
    return(to_string(this->identificador) + ", " + to_string(this->Fecha.getDia()) + ", " + to_string(this->Fecha.getMes()) + ", " + to_string(this->Fecha.getAnio()) + ", " + titulo + ", " + link + ", " + text);
}