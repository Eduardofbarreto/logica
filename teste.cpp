#include<iostream>
#include<string>
#include<iomanip>
#include<locale>

class Veiculo{
    public:
    std::string nome;
    std::string marca;
    int ano;

    Veiculo(){}

    virtual void ColetarInfo(){
        std::cout<<"Digite o nome do veículo: "<<std::endl;
        std::cin>>nome;
        std::cout<<"Digite a marca do veículo: "<<std::endl;
        std::cin>>marca;
        std::cout<<"Digite o ano do veículo: "<<std::endl;
        std::cin>>ano;
    }

    virtual void exibirInfo(){
        std::cout<<std::endl;
        std::cout<<"Nome do veículo: "<<nome<<std::endl;
        std::cout<<"Marca do veículo: "<<marca<<std::endl;
        std::cout<<"Ano do veículo: "<<ano<<std::endl;
    }
};

class Carro : public Veiculo{
    public:
    std::string radio;

    Carro(){}

    void ColetarInfo() override{
        Veiculo::ColetarInfo();
        std::cout<<"Rádio: "<<std::endl;
        std::cin>>radio;
        std::cout<<std::endl;
    }

    void exibirInfo() override{
        Veiculo::exibirInfo();
        std::cout<<"Possui rádio? "<<radio<<std::endl;
    }
};

int main(){

    Carro meuObj;
    meuObj.ColetarInfo();
    meuObj.exibirInfo();

    return 0;
}