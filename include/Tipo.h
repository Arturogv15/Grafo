#ifndef TIPO_H
#define TIPO_H

class Tipo
{
    public:
        Tipo(int, int, char);
        int CompareTo(Tipo*);
        int GetA();
        int GetB();
        char GetC();

    private:
        int a;
        int b;
        char c;
};

#endif // TIPO_H
