#include <iostream>
#include "Grafo.h"
using namespace std;

int main()
{
    int peso = 1;

    Grafo g;
    Tipo *origen = new Tipo(1,1,'a');
    Tipo *destino = new Tipo(2,2,'b');
    g.Insertar(origen, destino, peso);
    g.Mostrar();
    /*
    Tipo *origen = new Tipo(1,1,'a');
    g.InsertaNodo(origen);
    origen = new Tipo(2,2,'b');
    g.InsertaNodo(origen);
    origen = new Tipo(3,3,'c');
    g.InsertaNodo(origen);
    origen = new Tipo(4,4,'d');
    g.InsertaNodo(origen);
    g.Mostrar(); */
    //g.Inserta(origen);

    /*
    Tipo *origen = new Tipo(1,1,'1');
    Tipo *destino = new Tipo(2,2,'2');
    g.Insertar(origen, destino, peso);
    Tipo obj3(3,3,'3');
    Tipo obj4(4,4,'4');
    Tipo obj5(5,5,'5');

    g.Insertar(origen, destino, peso);
    */

    return 0;
}
