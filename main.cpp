#include <cstdlib>
#include <string>
#include <iostream>

#include "Estudiante.h"
using namespace std;

int main(int argc, char** argv) {
    Estudiante a;
    a.toString();
    cout << endl << endl;
    a.setNombre();
    a.setCi();
    a.setEmail();
    a.toString();
    return 0;
}

