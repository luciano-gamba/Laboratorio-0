#ifndef DTINFOESTUDIANTE_H
#define DTINFOESTUDIANTE_H
#include <string>
using namespace std;

class DTInfoEstudiante {
public:
    DTInfoEstudiante();
    DTInfoEstudiante(int,string,int);
    ~DTInfoEstudiante();
    
    void setInfo(int,string,int);
    
    int getCi();
    string getNombreEst();
    int getidentificadorInfo();
    
private:
    int ci;
    string NombreEst;
    int identificadorInfo; 

};

#endif /* DTINFOESTUDIANTE_H */

