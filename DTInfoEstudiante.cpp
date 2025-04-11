#include "DTInfoEstudiante.h"

DTInfoEstudiante::DTInfoEstudiante() {
    ci=0;
    NombreEst="Sin nombre";
    identificadorInfo=0;
}
DTInfoEstudiante::DTInfoEstudiante(int a,std::string b,int c){
    ci=a;
    NombreEst=b;
    identificadorInfo=c;
}
DTInfoEstudiante::~DTInfoEstudiante(){
    
}
void DTInfoEstudiante::setInfo(int a,std::string b,int c){
    ci=a;
    NombreEst=b;
    identificadorInfo=c;
}
int DTInfoEstudiante::getCi(){
    return ci;
}
std::string DTInfoEstudiante::getNombreEst(){
    return NombreEst;
}
int DTInfoEstudiante::getidentificadorInfo(){
    return identificadorInfo;
}


ostream& operator<<(ostream& os, DTInfoEstudiante DTInf)
{
    os << DTInf.getCi() << ", " << DTInf.getNombreEst() << ", " << DTInf.getidentificadorInfo();
    return os;
}
