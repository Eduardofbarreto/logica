#ifndef PRODUTO_H
#define PRODUTO_H
#include<string>

class Produto{
    public:
    std::string nome;
    int quantidade;
    double valor;
    double total;

    Produto(){}

    void coletar();
    void calcular();
    void exibir();
};

#endif  //!__PRODUTO__H__