#include<iostream>
#include<string>
#include<iomanip>
#include<locale>

class Carro{
    public:
    std::string nome;
    std::string marca;
    int ano;

    Carro(std::string n, std::string m,
        int a) : nome(n), marca(m), ano(a) {}

    void pedirInfo(){
        std::cout<<"Digite o nome do carro: "<<std::endl;
        std::cin>>nome;
        std::cout<<"Digite a marca do carro: "<<std::endl;
        std::cin>>marca;
        std::cout<<"Digite o ano do carro: "<<std::endl;
        std::cin>>ano;
    }

    void exibirInfo(){
        std::cout<<"Nome: "<<nome<<std::endl;
        std::cout<<"Marca: "<<marca<<std::endl;
        std::cout<<"Ano: "<<ano<<std::endl;
    }

};

int main(){

    std::string cNome, cMarca;
    int cAno;

    Carro meuObj(cNome, cMarca, cAno);
    meuObj.pedirInfo();
    meuObj.exibirInfo();

}