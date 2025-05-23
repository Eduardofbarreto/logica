
#include "ContaEmpresa.h"
#include<iostream>

int main(){

    int opcao;
    
    ContaEmpresa c;

    std::cout<<"========================"<<std::endl;
    std::cout<<"Bem-vido ao sistema bancário!"<<std::endl;
    std::cout<<"Digite a opção adequada: "<<std::endl;
    std::cout<<"1 - Deposito"<<std::endl;
    std::cout<<"2 - Saque"<<std::endl;
    std::cout<<"3 - Consultar"<<std::endl;
    std::cin>>opcao;

    switch (opcao)
    {
    case 1:
        c.depositar();        
        break;
    case 2:
        c.sacar();
        break;
    case 3:
        c.consultar();
    default:
        std::cout<<"Você digitou uma opção inválida!"<<std::endl;
        break;
    }

    return 0;
}