#include<iostream>
#include<string>

int main(){

    struct{
        int num1, num2, soma;
    } minhaEstrutura;

    std::cout<<"Digite um valor para num1: "<<std::endl;
    std::cin>>minhaEstrutura.num1;

    std::cout<<"Digite um valor para num2: "<<std::endl;
    std::cin>>minhaEstrutura.num2;

    minhaEstrutura.soma = minhaEstrutura.num1 + minhaEstrutura.num2;

    std::cout<<"O resultado e: "<<minhaEstrutura.soma<<std::endl;

    return 0;
}