#ifndef PESSOA_H
#define PESSOA_H
#include<string>

class Pessoa{
    public:
        std::string nome;
        int idade;

    Pessoa();

    void coletar();
    void apresentar();
};

#endif 
