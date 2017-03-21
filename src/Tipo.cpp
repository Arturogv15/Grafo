#include "Tipo.h"

Tipo::Tipo(int a, int b, char c)
{
    this -> a = a;
    this -> b = b;
    this -> c = c;
}

int Tipo::CompareTo(Tipo *c){
    if(this -> a < c->a)
        return 1;
    if(this -> a > c->a)
        return -1;
    return 0;
}

int Tipo::GetA(){
    return a;
}

int Tipo::GetB(){
    return b;
}

char Tipo::GetC(){
    return c;
}
