#ifndef INFORMACION_H
#define INFORMACION_H
#include <string>

class Informacion {
public:
    virtual std::string toString();
private:
    int identificador;
    
};

#endif /* INFORMACION_H */

