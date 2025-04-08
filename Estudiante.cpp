#include "Estudiante.h"


Estudiante::Estudiante() {
    nombre = "Sin nombre";
    ci = 0;
    email = "Sin email";
}

Estudiante::Estudiante(std::string nom, int ced, std::string ema){
    this->nombre = nom;
    this->ci = ced;
    this->email = ema;
}

Estudiante::~Estudiante() {
}

void Estudiante::setNombre(std::string a){
    nombre=a;
}
void Estudiante::setCi(int b){
    ci=b;
}
void Estudiante::setEmail(std::string c){
    email=c;
}

 std::string Estudiante::getNombre(){
     return nombre;
 }
 int Estudiante::getCi(){
     return ci;
 }
 std::string Estudiante::getEmail(){
     return email;
 }

std::string Estudiante::toString(){
   return("\nNombre : "+this->nombre+"\nCédula : "+std::to_string(this->ci)+"\nE-mail : "+this->email+'\n');
}

std::set<std::string> Estudiante::listarInfo(DTFecha desde){
    std::set<std::string> resultado;
    return resultado;
}