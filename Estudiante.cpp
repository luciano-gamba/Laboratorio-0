#include "Estudiante.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

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

void Estudiante::setNombre(){
    cout << "Ingrese nombre: ";
    cin >> nombre;
}
void Estudiante::setCi(){
    cout << "Ingrese C.I.: ";
    cin >> ci;
}
void Estudiante::setEmail(){
    cout << "Ingrese e-mail: ";
    cin >> email;
}

//void Estudiante::setInformacion(informacion* I){
//  ACA IRIAN MAS COSAS
//}

std::string Estudiante::toString(){
   return("\nNombre : "+this->nombre+"\nCédula : "+std::to_string(this->ci)+"\nE-mail : "+this->email+'\n');
}

//faltaria listarinfo();            primero hay que hacer los punteros a info, tambien falta info