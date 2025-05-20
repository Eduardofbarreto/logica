#ifndef RACAOCAES_H
#define RACAOCAES_H
#include "Produto.h"
#include<string>

class RacaoCaes :public Produto{
    public:
    std::string marca;
    double gramas;

    void coletar() override;
    void exibir() override;

};

#endif