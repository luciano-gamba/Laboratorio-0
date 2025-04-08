#ifndef DTFECHA_H
#define DTFECHA_H

class DTFecha {
public:
    DTFecha();
    void setfecha(int d, int m, int a);
    int getDia();
    int getMes();
    int getAnio();
    bool mayorIgual(DTFecha);
private:
    int dia,mes,anio;
};

#endif /* DTFECHA_H */

