#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>
#include <set>
#include "DTFecha.h"
#include "Informacion.h"
using namespace std;

class Estudiante {
public:
    Estudiante();
    Estudiante(string, int, string);
    ~Estudiante();
    
    void setNombre(string);
    void setCi(int);
    void setEmail(string);
    
    void guardarInfo(Informacion* infoAguardar);
    
    string getNombre();
    int getCi();
    string getEmail();
    
    string toString();
    set<string> listarInfo(DTFecha);
private:
    string nombre;
    int ci;
    string email;
    set<Informacion*> infoGuardada; //Pseudoatributo
};

string convertirResultadoLista(set<string> Lista);

#endif /* ESTUDIANTE_H */

