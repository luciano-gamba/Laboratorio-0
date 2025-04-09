#ifndef CHATGPT_H
#define CHATGPT_H
#include "Informacion.h"
#include "DTFecha.h"
using namespace std;

class ChatGPT: public Informacion {
public:
    ChatGPT();
    ChatGPT(int id, DTFecha fecha, string p, string r);
    virtual ~ChatGPT();
    
    string toString();
private:
    string pregunta;
    string respuesta;
};

#endif /* CHATGPT_H */

