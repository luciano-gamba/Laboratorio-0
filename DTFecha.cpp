#include "DTFecha.h"

DTFecha::DTFecha() {
    dia=0;
    mes=0;
    anio=0;
}

DTFecha::DTFecha(int d, int m, int a){
    dia=d;
    mes=m;
    anio=a;
}

void DTFecha::setfecha(int d, int m, int a){
    dia=d;
    mes=m;
    anio=a;
}
int DTFecha::getDia(){
    return dia;
}
int DTFecha::getMes(){
    return mes;
}
int DTFecha::getAnio(){
    return anio;
}
bool DTFecha::mayorIgual(DTFecha otra){
    if(anio>otra.getAnio()){
        return true;
    }else if (anio==otra.getAnio() && mes>otra.getMes()){
        return true;
    }else if (anio==otra.getAnio() && mes==otra.getMes() && dia>=otra.getDia()){
        return true;
    }else{
        return false;
    }
}