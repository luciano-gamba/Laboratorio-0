#include <cstdlib>
#include <string>
#include <iostream>

#include "Estudiante.h"
using namespace std;

int main(int argc, char** argv) {
    Estudiante* a = new Estudiante;
    cout << a->toString();
    cout << endl << endl;
    a->setNombre();
    a->setCi();
    a->setEmail();
    cout << a->toString();
    return 0;
}

