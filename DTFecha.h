#ifndef DTFECHA_H
#define DTFECHA_H
using namespace std;

class DTFecha {
public:
    DTFecha();
    DTFecha(int d, int m, int a);
    void setfecha(int d, int m, int a);
    int getDia();
    int getMes();
    int getAnio();
    bool mayorIgual(DTFecha);
private:
    int dia,mes,anio;
};

#endif /* DTFECHA_H */

