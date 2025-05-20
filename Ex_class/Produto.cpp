#include "Produto.h"
#include <iostream>
#include <iomanip>

void Produto::coletar(){
    std::cout<<"Nome do produto: "<<std::endl;
    std::cin>>nome;
    std::cout<<"Quantidade: "<<std::endl;
    std::cin>>quantidade;
    std::cout<<"Valor do produto: "<<std::endl;
    std::cin>>valor;
}

void Produto::calcular(){
    total = quantidade * valor;
}

void Produto::exibir(){
    std::cout<<"O produto é "<<nome<<std::endl;
    std::cout<<"Você comprou "<<quantidade<<" produto(s)."<<std::endl;
    std::cout<<"Seu valor é R$ "<<std::fixed<<std::setprecision(2)<<valor<<std::endl;
    Produto::calcular();
    std::cout<<"Total do valor será de R$ "<<std::fixed<<
        std::setprecision(2)<<total<<std::endl;
        
}

