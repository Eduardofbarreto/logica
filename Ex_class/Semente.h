#ifndef SEMENTES_H
#define SEMENTES_H
#include "Produto.h"

class Sementes : public Produto{
    public:
    std::string opcao;
    int pacotes;
    const double preco = 0.99;
    double total;

    Sementes(){}

    void coletar() override;
    void calcular();
    void exibir() override;
};

#endif