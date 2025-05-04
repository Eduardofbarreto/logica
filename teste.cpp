#include <iostream>
#include <string>
#include<iomanip>
#include<locale>

class Carro{
    public:
    std::string marca;
    std::string modelo;
    int ano;
    double valor;

    Carro(){}

    void preencher(){
        std::cout<<"Digite a marca do veículo: "<<std::endl;
    std::cin>>marca;

    std::cout<<"Digite o modelo do veículo: "<<std::endl;
    std::cin>>modelo;

    std::cout<<"Digite o ano do veículo: "<<std::endl;
    std::cin>>ano;

    std::cout<<"Digite o valor do veículo: "<<std::endl;
    std::cin>>valor;
    }

    void exibir(){
        std::cout<<"\nInformações sobre o veículo: "<<std::endl;
        std::cout<<"Marca: "<<marca<<std::endl;
        std::cout<<"Modelo: "<<modelo<<std::endl;
        std::cout<<"Ano: "<<ano<<std::endl;
        std::cout<<"Valor: R$"<<std::fixed<<std::setprecision(2)<<valor<<std::endl;
        std::cout.imbue(std::locale("pt_BR.UTF-8"));
        std::cout.imbue(std::locale("C"));
        std::cout<<"\n"<<std::endl;
    }
};

int main(){

    Carro meuCarro;
    meuCarro.preencher();
    meuCarro.exibir();

    return 0;
}
