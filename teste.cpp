#include <iostream>
#include <string>
#include<iomanip>
#include<locale>

class Carro{
    public:
    std::string nome;
    double valor;

    Carro(std::string n, double v) : nome(n), valor(v){}

    void coletarDados(){
        std::cout<<"Qual nome do carro: "<<std::endl;
        std::cin>>nome;
        std::cout<<"Qual valor do carro: "<<std::endl;
        std::cin>>valor;
    }

    void exibirDados(){
        std::cout<<"O nome do carro é: "<<nome<<std::endl;
        std::cout<<"O valor é de: R$"<<std::fixed<<std::setprecision(3)<<valor<<std::endl;
        std::cout.imbue(std::locale("pt_BR.UTF-8"));
        std::cout.imbue(std::locale("C"));
    }

};

int main(){

    std::string n;
    double v;

    Carro meuObj(n, v);
    meuObj.coletarDados();
    meuObj.exibirDados();


    return 0;
}

