#include "Estudiante.h"
#include "Informacion.h"


Estudiante::Estudiante() {
    nombre = "Sin nombre";
    ci = 0;
    email = "Sin email";
}

Estudiante::Estudiante(string nom, int ced, string ema){
    this->nombre = nom;
    this->ci = ced;
    this->email = ema;
}

Estudiante::~Estudiante() {
}

void Estudiante::setNombre(string a){
    nombre=a;
}
void Estudiante::setCi(int b){
    ci=b;
}
void Estudiante::setEmail(string c){
    email=c;
}

void Estudiante::guardarInfo(Informacion* infoAguardar){
    this->infoGuardada.insert(infoAguardar);
}


string Estudiante::getNombre(){
     return nombre;
 }
 int Estudiante::getCi(){
     return ci;
 }
string Estudiante::getEmail(){
     return email;
 }

string Estudiante::toString(){
   return("\nNombre : "+this->nombre+"\nCédula : "+to_string(this->ci)+"\nE-mail : "+this->email+'\n');
}

set<string> Estudiante::listarInfo(DTFecha desde){
    set<string> resultado;
    
    for (set<Informacion*>::iterator it = this->infoGuardada.begin(); it != this->infoGuardada.end(); ++it) {
       if(!desde.mayorIgual((*it)->getFecha())) {
           resultado.insert((*it)->toString());
       }       
    }
    return resultado;
}

string convertirResultadoLista(set<string> Lista){
    string resultadoLista;
    for (set<string>::iterator it = Lista.begin(); it != Lista.end(); ++it) {
        resultadoLista = resultadoLista + ", " + *it + "\n\n";
    }
    return resultadoLista;
    
}

void Estudiante::borrarInfo(Informacion* info){
    this->infoGuardada.erase(info);
}
