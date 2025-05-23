#include "Pessoa.h"
#include<iostream>

void Pessoa::coletar(){
    std::cout<<"Qual nome: "<<std::endl;
    std::cin>>nome;
}

void Pessoa::exibir(){
    std::cout<<"Nome: "<<nome<<std::endl;
}