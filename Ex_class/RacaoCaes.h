#ifndef RACAOCAES_H
#define RACAOCAES_H
#include "Produto.h"
#include<string>

class RacaoCaes :public Produto{
    public:
    std::string marca;
    int quantidade;
    const double precoKg = 8.99;
    double valor;

    void coletar() override;
    void calcular();
    void exibir() override;

};

#endif