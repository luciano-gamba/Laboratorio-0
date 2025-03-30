#include "Estudiante.h"
#include <cstdlib>
#include <iostream>
using namespace std;

Estudiante::Estudiante() {
    nombre = "Sin nombre";
    ci = 0;
    email = "Sin email";
}

Estudiante::Estudiante(std::string nom, int ced, std::string ema){
    nombre = nom;
    ci = ced;
    email = ema;
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

std::string Estudiante::toString(){
    cout <<"Nombre : " << nombre << endl;
    cout <<"Cédula : " << ci << endl;
    cout <<"E-mail : " << email << endl;
}