#include <iostream>
#include<string>

void Aprensentacao(std::string nome){
    std::cout<<"Bem-vindo "<<nome<<"!"<<std::endl;
}

int main(){

    std::string nome;

    std::cout<<"Digite seu nome: "<<std::endl;
    std::cin>>nome;

    Aprensentacao(nome);

    return 0;
}