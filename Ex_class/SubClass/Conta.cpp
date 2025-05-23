#include "Conta.h"
#include<iostream>
#include<iomanip>

void Conta::depositar(){
    std::cout<<"Qual valor para deposito: "<<std::endl;
    std::cin>>deposito;

    valorFinal = (getsaldo() + deposito);

    std::cout<<"Seu saldo agora é: R$ "<<std::fixed<<
        std::setprecision(2)<<valorFinal<<std::endl;
}

void Conta::sacar(){
    std::cout<<"Qual valor para saque: "<<std::endl;
    std::cin>>saque;

    valorFinal = (getsaldo() - saque);

    std::cout<<"Seu saldo agora é: R$ "<<std::fixed<<
        std::setprecision(2)<<valorFinal<<std::endl;
}

void Conta::consultar(){
    std::cout<<"Seu saldo é de: R$ "<<std::fixed<<
        std::setprecision(2)<<getsaldo()<<std::endl;
}
