#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>

class Estudiante {
public:
    Estudiante();
    Estudiante(std::string nom, int ced, std::string ema);
    ~Estudiante();
    
    void setNombre();
    void setCi();
    void setEmail();
    
    std::string toString();
private:
    std::string nombre;
    int ci;
    std::string email;

};

#endif /* ESTUDIANTE_H */

