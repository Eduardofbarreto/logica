#include<iostream>
#include<string>
#include<locale>
#include<iomanip>

int main(){

    std::string nome;
    double valor;

    std::cout<<"Qual nome do produto? "<<std::endl;
    std::cin>>nome;

    std::cout<<"Qual valor do produto? "<<std::endl;
    std::cin>>valor;

    std::cout<<"O nome do produto é: "<<nome<<std::endl;
    std::cout<<"O valor do produto é: R$"<<std::fixed<<std::setprecision(2)<<valor<<std::endl;

    return 0;
}