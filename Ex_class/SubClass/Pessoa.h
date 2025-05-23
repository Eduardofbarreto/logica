#ifndef PESSOA_H
#define PESSOA_H
#include<string>
#include<iostream>

class Pessoa{
    private:
        std::string nome;

    public:
        std::string getnome(){
            return nome;
        }

        void setnome(std::string n){
            nome = n;
        }

        void coletar();

        void exibir();
};

#endif