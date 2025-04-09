#include "PaginaWeb.h"
#include "DTFecha.h"
#include "DTFecha.cpp"

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

std::string PaginaWeb::toString(){
    return(std::to_string(this->identificador) + ", " + std::to_string(this->Fecha) + ", " + titulo + ", " + link + ", " + text);
   }