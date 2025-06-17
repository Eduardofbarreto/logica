#ifndef TABUADA_H
#define TABUADA_H
#include<iostream>

class Tabuada{
    private:
    int num;
    int numeros[10] = {1,2,3,4,5,6,7,8,9,10};
    int resultado;

    public:

    void coletar();

    void resolver();

};

#endif