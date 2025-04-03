#ifndef PAGINAWEB_H
#define PAGINAWEB_H
#include <string>

class PaginaWeb {
public:
    PaginaWeb();
    PaginaWeb(std::string, std::string, std::string);
    ~PaginaWeb();
    
    std::string toString();
private:
    std::string titulo, link, text;
};

#endif /* PAGINAWEB_H */

