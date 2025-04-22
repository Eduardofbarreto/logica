#include <iostream>
#include<string>

void Aprensentacao(std::string nome, int idade){
    std::cout<<"Bem-vindo "<<nome<<"!"<<std::endl;
    std::cout<<"Voce tem "<<idade<<" anos!"<<std::endl;
}

int main(){

    std::string nome;
    int idade;

    std::cout<<"Digite seu nome: "<<std::endl;
    std::cin>>nome;

    std::cout<<"Digite a sua idade: "<<std::endl;
    std::cin>>idade;

    Aprensentacao(nome, idade);

    return 0;
}