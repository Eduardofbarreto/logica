#include "RacaoCaes.h"
#include<iomanip>
#include<iostream>

void RacaoCaes::coletar(){
    Produto::coletar();
    std::cout<<"Digite a marca da ração: "<<std::endl;
    std::cin>>marca;
    std::cout<<"Digite a quantidade em Gramas: "<<std::endl;
    std::cin>>gramas;
}

void RacaoCaes::exibir(){
    Produto::exibir();
    std::cout<<"A marca é "<<marca<<std::endl;
    std::cout<<"A quantidade é "<<gramas<<std::endl;
}