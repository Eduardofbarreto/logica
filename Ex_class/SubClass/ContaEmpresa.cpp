#include "Conta.h"
#include "ContaEmpresa.h"
#include<iostream>
#include<string>

void ContaEmpresa::depositar(){
    std::cout<<"Digite o cnpj da empresa: "<<std::endl;
    std::cin>>cnpj;
    Conta::depositar();
}

void ContaEmpresa::sacar(){
    std::cout<<"Digite o cnpj da empresa: "<<std::endl;
    std::cin>>cnpj;
    Conta::sacar();
}

void ContaEmpresa::consultar(){
    std::cout<<"Digite o cnpj da empresa: "<<std::endl;
    std::cin>>cnpj;
    Conta::consultar();
}