#include<iostream>
#include<string>

class Padrao{
    public:
    std::string nome;
    int idade;

    Padrao(){}

    virtual void gravarInfo(){
        std::cout<<"Qual seu nome: "<<std::endl;
        std::getline(std::cin, nome);
        std::cout<<"Qual sua idade: "<<std::endl;
        std::cin>>idade;
    }

    virtual void exibirInfor(){
        std::cout<<"O nome e: "<<nome<<"."<<std::endl;
        std::cout<<"A idade e: "<<idade<<"."<<std::endl;
    }
};

int main(){

    Padrao meuPadrao;
    meuPadrao.gravarInfo();
    meuPadrao.exibirInfor();



    return 0;
}