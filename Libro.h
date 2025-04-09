#ifndef LIBRO_H
#define LIBRO_H
#include "Informacion.h"
#include <set>
#include <iostream>
#include "DTFecha.h"
using namespace std;

class Libro: public Informacion {
public:
    Libro();
    Libro(int id, DTFecha fecha, string t, set<string> a, string r);
    virtual ~Libro();
    void setLibro(int id, DTFecha fecha, string t, set<string> a, string r);
    
    string toString();
    string mostrarAutores();
private:
    string titulo;
    set<string> autores;
    string resumen;
};

#endif /* LIBRO_H */

