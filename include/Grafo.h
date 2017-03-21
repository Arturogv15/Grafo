#ifndef GRAFO_H
#define GRAFO_H
#include <iostream>
#include "Tipo.h"
using namespace std;

class Arista;
class Vertice;

class Grafo
{
    public:
        Grafo();
        void Insertar(Tipo*, Tipo*, int);
        Vertice* InsertaNodo(Tipo*);
        void Mostrar();

    private:
        Vertice *primero;
        int contV;
};

class Vertice
{
    public:
        Vertice(Tipo *);
        Tipo *GetDato();
        void InsertaArista(Arista*);
        void InsertarArista2(Vertice &, Vertice &, int);
        //Vertice* Buscar(Vertice*);

    private:
       Vertice *sig;
       Arista *primera;
       Tipo *dato;

       friend class Arista;
       friend class Grafo;
};

class Arista
{
    public:
        Arista(Vertice*, Vertice*, int);
        Vertice *GetV1();

    private:
       Arista *sig;
       Vertice *v1;
       Vertice *v2;
       int peso;

       friend class Vertice;
};

#endif // GRAFO_H

