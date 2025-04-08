#include <iostream>
#include<string>

int main(){

    std::string nome, sobrenome;

    std::cout<<"Digite seu nome: "<<std::endl;
    std::getline(std::cin, nome);

    std::cout<<"Digite seu sobrenome: "<<std::endl;
    std::getline(std::cin, sobrenome);

    std::cout<<nome<<" "<<std::endl;
    std::cout<<nome.length()<<std::endl;
    std::cout<<nome.size()<<std::endl;
    std::cout<<nome.at(0)<<std::endl;
    nome.at(0) = 'P';
    std::cout<<nome<<std::endl;
 

    return 0;
}