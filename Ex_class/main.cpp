#include "RacaoCaes.h"
#include "Semente.h"
#include<iostream>

int main(){

    int opcao;

    std::cout<<"Escolha a opção adquada: "<<std::endl;
    std::cout<<"1 - Rações "<<std::endl;
    std::cout<<"2 - Sementes "<<std::endl;
    std::cin>>opcao;


    switch(opcao){
        case 1:
            RacaoCaes obj;
            obj.coletar();
            obj.calcular();
            obj.exibir();
        break;
        case 2:
            Sementes obj1;
            obj1.coletar();
            obj1.calcular();
            obj1.exibir();
        break;
        default:
            std::cout<<"Nenhuma opção válida!"
    }

    

    return 0;
}