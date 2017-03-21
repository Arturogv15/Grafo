#include "Grafo.h"

Grafo::Grafo(){
    primero = NULL;
    contV = 0;
}

Tipo* Vertice::GetDato(){
    return this->dato;
}

Vertice::Vertice(Tipo *dato){
    this->dato=dato;
    primera = NULL;
    sig = NULL;
}

Arista::Arista(Vertice *v1, Vertice *v2, int peso){
    sig = NULL;
    this -> v1 = v1;
    this -> v2 = v2;
    this -> peso = peso;
}

void Grafo::Insertar(Tipo *o, Tipo *d, int peso)
{
    Vertice *aux1 = primero;
    int i;
    for(i=0; i<contV; i++){
        if(aux1 -> GetDato() -> CompareTo(o) == 0 )
            break;
    }
    if(i==contV){
        aux1 = InsertaNodo(o);
    }

    Vertice *aux2 = primero;
    for(i=0; i<contV; i++){
        if(aux2 -> GetDato() -> CompareTo(d) == 0 )
            break;
    }
    if(i==contV){
       aux2 = InsertaNodo(d);
    }
    cout << "Hola1" << endl;
    aux1->InsertarArista2(*aux1, *aux2, peso);
    cout << "Hola2" << endl;
    aux2->InsertarArista2(*aux2, *aux1, peso);
    //Arista *ari = new Arista(aux2,1);
   // InsertaArista();
}

Vertice* Grafo::InsertaNodo(Tipo* elemento)
{
    Vertice *aux =  new Vertice(elemento);
    if(!primero){
        primero = aux;
        primero->sig = NULL;
    }
    else{
        Vertice *aux2 = primero;
        while(aux2->sig){
            aux2 = aux2 -> sig;
        }
        aux2 -> sig = aux;
    }
    contV++;
}

void Grafo::Mostrar()
{
    if(primero==NULL)
        cout << "Lista vacia" << endl;
    else{

        Vertice *aux = primero;
        cout << "Total de vertices: " << contV << endl;
        while(aux){
            cout << aux->GetDato() ->GetA() << " "
            << aux->GetDato() ->GetB() << " "
            << aux->GetDato() ->GetC() << endl << endl;
            //cout << aux->primera->GetV1() << endl;
            aux = aux -> sig;
        }
    }
}

void Vertice::InsertaArista(Arista *ari)
{
    Arista *aux = ari -> v1 -> primera;

    if(!aux)
        ari->v1->primera=ari;
    else{
        while(aux->sig!=NULL)
            aux = aux->sig;
        aux->sig=ari;
    }
}


void Vertice::InsertarArista2(Vertice &origen, Vertice &destino, int peso)
{
    Arista *ari = new Arista(&origen, &destino, 1);
    Arista *aux = origen.primera;
    if(aux==NULL){
        origen.primera=ari;
    cout << ari->GetV1()->GetDato()->GetA()<< endl;
    }
    else{
        while(origen.primera->sig!=NULL)
        {
            cout << "2" << endl;
            aux = aux -> sig;
            cout << "3" << endl;
            origen.primera=origen.primera->sig;
        }
        cout << "4" << endl;
        origen.primera = ari;
    }
}

Vertice* Arista::GetV1()
{
    return v1;
}
