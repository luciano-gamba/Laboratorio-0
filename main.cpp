#include <cstdlib>
#include <string>
#include <iostream>

#include "Estudiante.h"
#include "Libro.h"
#include "DTFecha.h"
#include "PaginaWeb.h"
#include "ChatGPT.h"
using namespace std;

int main(int argc, char** argv) {
    
    //PAGINA WEB
    
    DTFecha* fecha1 = new DTFecha();
    fecha1->setfecha(7,3,2024);
    
    DTFecha* fecha2 = new DTFecha();
    fecha2->setfecha(5,3,2024);
    
    PaginaWeb* Blog = new PaginaWeb(1, *fecha1, "Programación 4 Guía Semana 1 (4/3)", "https://eva.fing.edu.uy/pluginfile.php/468051/mod_resource/content/4/Guia01_P42024_IntroCBasicos.pdf", "El objetivo de esta semana es contextualizar el paradigma de Orientación a Objetos (OO) en el marco de la Ingeniería de Software, así como comenzar a ver sus conceptos básicos y cómo éstos se implementan en C++.");
    
    PaginaWeb* Blog2 = new PaginaWeb(2, *fecha2, "Programación orientada a objetos", "https://es.wikipedia.org/wiki/Programaci%C3%B3n_orientada_a_objeto", "La programación orientada a objetos (POO, en español) es un paradigma de programación que parte del concepto de \"objetos\" como base, los cuales contienen información en forma de campos (a veces también referidos como atributos opropiedades) y código en forma de métodos. Algunas características clave de la programación orientada a objetos son herencia, cohesión, abstracción, polimorfismo, acoplamiento y encapsulamiento");
            
    cout << Blog->toString() << endl << endl;
    cout << Blog2->toString() << endl << endl;
    
    //CHATGPT
    
    DTFecha* fecha3 = new DTFecha();
    fecha3->setfecha(8,3,2024);
    
    DTFecha* fecha4 = new DTFecha();
    fecha4->setfecha(5,3,2024);
    
    ChatGPT* duda1 = new ChatGPT(3, *fecha3, "¿Qué es el polimorfismo en orientación a objetos?", "El polimorfismo en programación orientada a objetos se refiere a la capacidad de un objeto de tomar múltiples formas. Puede ser estático, resuelto en tiempo de compilación, basado en la herencia, o dinámico, resuelto en tiempo de ejecución, asociado a interfaces o métodos abstractos. En esencia, permite que objetos de diferentes clases respondan a la misma interfaz de manera coherente, facilitando la flexibilidad y extensibilidad del código.");
    
    ChatGPT* duda2 = new ChatGPT(4, *fecha4, "¿Qué es el acoplamiento en orientación a objetos?", "El acoplamiento en programación orientada a objetos se refiere al grado de dependencia entre las clases o módulos de un sistema. Un bajo acoplamiento es deseable, ya que implica que las clases son independientes entre sí, lo que facilita la modificación, mantenimiento y reutilización del código. Por otro lado, un alto acoplamiento indica una fuerte interdependencia entre las clases, lo que puede hacer que el sistema sea más difícil de entender, modificar y mantener.");
    
    cout << duda1->toString() << endl << endl; 
    cout << duda2->toString() << endl << endl; 
    
    //LIBRO
    
    set<string>Autores1;
    Autores1.insert("Craig Larman");
    DTFecha* fecha = new DTFecha();
    fecha->setfecha(15,3,2024);
    
    Libro* uno = new Libro(5, *fecha, "Applying UML and Patterns: An Introduction to Object-Oriented Analysis and Design and Iterative Development", Autores1, "Applying UML and Patterns is the world’s #1 business and college introduction to “thinking in objects”―and using that insight in real-world objectoriented analysis and design. Building on two widely acclaimed previous editions, Craig Larman has updated this book to fully reflect the new UML 2 standard, to help you master the art of object design, and to promote high-impact, iterative, and skillful agile modeling practices");
    
    cout << uno->toString()<<endl<<endl;
    
    //ESTUDIANTES
    
    Estudiante* persona1 = new Estudiante("Alex García", 52365899, "ag5678@gmail.com");
    
    Estudiante* persona2 = new Estudiante("Betina Gonzalez", 49891239, "beg999@gmail.com");
    
    //ESTABLEZCO LOS LINKS
/*    
    Estudiante = Alex García Información = 1
    Estudiante = Alex García Información = 2
    Estudiante = Alex García Información = 3
    Estudiante = Betina Gonzalez Información = 3
    Estudiante = Betina Gonzalez Información = 4
    Estudiante = Betina Gonzalez Información = 5
*/
    persona1->guardarInfo(Blog);
    persona1->guardarInfo(Blog2);
    persona1->guardarInfo(duda1);
    persona2->guardarInfo(duda1);
    persona2->guardarInfo(duda2);
    persona2->guardarInfo(uno);
    
    Blog->guardarEstudiante(persona1);
    Blog2->guardarEstudiante(persona1);
    duda1->guardarEstudiante(persona1);
    duda1->guardarEstudiante(persona2);
    duda2->guardarEstudiante(persona2);
    uno->guardarEstudiante(persona2);
    
    
    
    DTFecha* fecha15 = new DTFecha();
    fecha15->setfecha(8,3,2024);
      //Pruebas listarInfo
    cout<<convertirResultadoLista(persona1->listarInfo(*fecha15));
    cout<<convertirResultadoLista(persona2->listarInfo(*fecha15));

    set<DTInfoEstudiante> buscarInformacion;
    
    set<Informacion*> listaInformacionGeneral;
    
    listaInformacionGeneral.insert(Blog);
    listaInformacionGeneral.insert(Blog2);
    listaInformacionGeneral.insert(duda1);
    listaInformacionGeneral.insert(duda2);
    listaInformacionGeneral.insert(uno);
    
    set<Informacion*> resultado;
    
    for (set<Informacion*>::iterator it = listaInformacionGeneral.begin(); it !=listaInformacionGeneral.end(); ++it) {
       if ((*it)->toString().find("polimorfismo")){
           resultado.insert(*it);
       }       
    }
    
    for (set<Informacion*>::iterator it = resultado.begin(); it !=resultado.end(); ++it) {
        DTInfoEstudiante aux();
        
        for(set<Estudiante*>::iterator ite = aux->)
        
        
        
        aux->setInfo((*it)->getIDinfo(),,);     
       
    
    
    
    }
    

    
    return 0;
}

