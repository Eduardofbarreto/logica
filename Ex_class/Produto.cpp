#include "Produto.h"
#include<iostream>
#include<iomanip>

void Produto::coletar(){
    std::cout<<"Nome do produto: "<<std::endl;
    std::cin>>nome;
    std::cout<<"Preço do protudo: "<<std::endl;
    std::cin>>preco;
}

void Produto::exibir(){
    std::cout<<"Produto: "<<nome<<std::endl;
    std::cout<<"Preço: R$ "<<std::fixed<<
        std::setprecision(2)<<preco<<std::endl;
}