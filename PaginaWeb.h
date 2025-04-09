#ifndef PAGINAWEB_H
#define PAGINAWEB_H
#include <string>
#include "Informacion.h"
using namespace std;

class PaginaWeb: public Informacion {
public:
    PaginaWeb();
    PaginaWeb(int id, DTFecha fecha, string t, string l, string text);
    ~PaginaWeb();
    
    string toString();
private:
    string titulo, link, text;
};

#endif /* PAGINAWEB_H */
