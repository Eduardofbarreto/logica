#include<iostream>
#include<string>

class Coisas{
    public:
    std::string nome;

    Coisas(){}

    void coletarNome(){
        std::cout<<"Digite o nome: "<<std::endl;
        std::cin>>nome;
    }

    void exibirNome(){
        std::cout<<"O nome é: "<<nome<<std::endl;
    }
};

int main(){

    Coisas meuObj;
    meuObj.coletarNome();
    meuObj.exibirNome();

    return 0;
}