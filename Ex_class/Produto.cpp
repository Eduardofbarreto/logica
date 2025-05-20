#include "Produto.h"
#include<iostream>
#include<iomanip>

void Produto::coletar(){
    std::cout<<"Nome do produto: "<<std::endl;
    std::cin>>nome;
}

void Produto::exibir(){
    std::cout<<"Produto: "<<nome<<std::endl;
}