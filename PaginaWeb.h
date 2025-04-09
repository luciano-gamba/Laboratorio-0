#ifndef PAGINAWEB_H
#define PAGINAWEB_H
#include <string>
#include "DTFecha.h"
#include "Informacion.h"

class PaginaWeb: public Informacion {
public: 
    PaginaWeb();
    PaginaWeb(int id, DTFecha fecha, std::string t, std::string l, std::string text);
    ~PaginaWeb();
    
    std::string toString();
private:
    std::string titulo, link, text;
};

#endif /* PAGINAWEB_H */

