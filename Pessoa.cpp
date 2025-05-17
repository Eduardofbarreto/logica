#include "Pessoa.h"
#include<iostream>

Pessoa::Pessoa(){};

void Pessoa::coletar(){
    std::cout<<"Digite o nome: "<<std::endl;
    std::cin>>nome
}

void Pessoa::apresentar(){
    std::cout<<"O nome é: "<<nome<<" e tem "<<idade<<"."<<std::endl;
}