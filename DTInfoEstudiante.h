#ifndef DTINFOESTUDIANTE_H
#define DTINFOESTUDIANTE_H
#include <string>


class DTInfoEstudiante {
public:
    DTInfoEstudiante();
    DTInfoEstudiante(int,std::string,int);
    ~DTInfoEstudiante();
    
    void setInfo(int,std::string,int);
    
    int getCi();
    std::string getNombreEst();
    int getidentificadorInfo();
    
private:
    int ci;
    std::string NombreEst;
    int identificadorInfo; 

};

#endif /* DTINFOESTUDIANTE_H */

