#include "RacaoCaes.h"
#include<iomanip>
#include<iostream>

void RacaoCaes::coletar(){
    Produto::coletar();
    std::cout<<"Digite a marca da ração: "<<std::endl;
    std::cin>>marca;
    std::cout<<"Digite a quantidade: "<<std::endl;
    std::cin>>quantidade;
}

void RacaoCaes::calcular(){
    valor = precoKg * quantidade;
}

void RacaoCaes::exibir(){
    std::cout<<std::endl;
    Produto::exibir();
    std::cout<<"A marca é "<<marca<<std::endl;
    std::cout<<"A quantidade é "<<quantidade<<" Kg."<<std::endl;
    std::cout<<"Valor total de R$ "<<std::fixed<<std::setprecision(2)<<
        valor<<std::endl;
    std::cout<<std::endl;
}