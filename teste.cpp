#include <iostream>
#include <string>

int main(){

    struct{
        int num1, num2, soma;
        std::string nome;
    } minhaEstrutura;

    std::cout<<"Digite o seu nome: "<<std::endl;
    std::cin>>minhaEstrutura.nome;

    std::cout<<"Digite um valor para num1: "<<std::endl;
    std::cin>>minhaEstrutura.num1;

    std::cout<<"Digite um valor para num2: "<<std::endl;
    std::cin>>minhaEstrutura.num2;

    minhaEstrutura.soma = minhaEstrutura.num1 + minhaEstrutura.num2;

    std::cout<<"Seu nome e: "<<std::endl;
    std::cout<<"O resultado da soma e: "<<minhaEstrutura.soma<<std::endl;

return 0;
}