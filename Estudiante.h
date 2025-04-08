#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>
#include <set>
#include "DTFecha.h"
#include "DTInfoEstudiante.h"

class Estudiante {
public:
    Estudiante();
    Estudiante(std::string, int, std::string);
    ~Estudiante();
    
    void setNombre(std::string);
    void setCi(int);
    void setEmail(std::string);
    
    std::string getNombre();
    int getCi();
    std::string getEmail();
    
    std::string toString();
    std::set<std::string> listarInfo(DTFecha);
private:
    std::string nombre;
    int ci;
    std::string email;

};

#endif /* ESTUDIANTE_H */

