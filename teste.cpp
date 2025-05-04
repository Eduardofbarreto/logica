#include<iostream>
#include<string>

class Pessoa{
    public:
    std::string nome;
    int idade;

    Pessoa(std::string nomeInicial, int idadeInicial) :
        nome(nomeInicial), idade(idadeInicial){}

    void apresentar() const{
        std::cout<<"Olá, meu nome é "<<nome<<" e tenho "<<idade<<" anos."<<std::endl;
    }
};

int main(){

    Pessoa pessoa1("Alice", 30);
    pessoa1.apresentar();

    Pessoa pessoa2("Carlos", 26);
    pessoa2.apresentar();

    return 0;
}