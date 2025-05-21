#include "Semente.h"
#include<iostream>
#include<string>
#include<iomanip>

void Sementes::coletar(){
    Produto::coletar();
    std::cout<<"Digite a opção de semente: "<<std::endl;
    std::cin>>opcao;
    std::cout<<"Digite a quantidade: "<<std::endl;
    std::cin>>pacotes;
}

void Sementes::calcular(){
    total = preco * pacotes;
}

void Sementes::exibir(){
    Produto::exibir();
    std::cout<<"A semente escolhida é: "<<opcao<<std::endl;
    std::cout<<"Você comprou "<<pacotes<<" pacotes de sementes."<<std::endl;
    std::cout<<"Total de R$ "<<std::fixed<<
        std::setprecision(2)<<total<<std::endl;
}