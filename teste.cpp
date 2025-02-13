#include<iostream>
#include<string>

class pessoa{
    public:
    std::string nome;

    pessoa(std::string nome){
        this->nome = nome;
    }
    void imprimirDados(){
        std::cout<<"Nome: "<<this->nome<<std::endl;
    }
};

int main(){

    std::string nome;

    std::cout<<"Digite um nome: "<<std::endl;
    std::getline(std::cin>>std::ws,nome);

    pessoa teste(nome);
    teste.imprimirDados();

    return 0;
}