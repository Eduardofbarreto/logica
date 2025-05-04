#include<iostream>
#include<string>
#include<locale>
#include<iomanip>

class Produto{
    public:
    std::string nome;
    double valor;

    Produto(std::string n, double v) :
        nome(n), valor(v) {}

    void informacoes(){
        std::cout<<"Nome do produto "<<nome<<std::endl;
        std::cout<<"Preço: R$ "<<std::fixed<<std::setprecision(2)<<valor<<std::endl;
        std::cout.imbue(std::locale("pt_BR.UTF-8"));
        std::cout.imbue(std::locale("C"));
    }
};

int main(){

    Produto produto1("Garrafa", 4.69);
    produto1.informacoes();

    Produto produto2("Mouse", 669.89);
    produto2.informacoes();


    return 0;
}
