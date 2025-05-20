#ifndef PRODUTO_H
#define PRODUTO_H
#include<string>

class Produto{
    public:
    std::string nome;

    Produto(){};

    virtual void coletar();
    virtual void exibir();
    //virtual ~Produto();
};

#endif 