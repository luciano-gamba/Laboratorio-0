#include "ChatGPT.h"

ChatGPT::ChatGPT() {
}

ChatGPT::ChatGPT(int id, DTFecha fecha, string p, string r) {
    this->identificador = id;
    this->Fecha = fecha;
    this->pregunta = p;
    this->respuesta = r;
}

ChatGPT::~ChatGPT() {
}

string ChatGPT::toString(){
    return(to_string(this->identificador) + ", " + to_string(this->Fecha.getDia()) + ", " + to_string(this->Fecha.getMes()) + ", " + to_string(this->Fecha.getAnio()) + ", " + pregunta + ", " + respuesta);
}