#include <iostream>
#include <string>
#include<iomanip>
#include<locale>

class Produto{
    public:
    std::string nome;
    double valor;

    Produto(){}

    void coletarInfo(){
        std::cout<<"Digite o nome do produto: "<<std::endl;
        std::cin>>nome;
        std::cout<<"Digite o valor do produto: "<<std::endl;
        std::cin>>valor;
    }

    void exibirInfo(){
        std::cout<<"O nome do produto é: "<<nome<<std::endl;
        std::cout<<"O valor do produto é: R$ "<<std::fixed<<std::setprecision(2)<<valor<<std::endl;
        std::cout.imbue(std::locale("pt_BR.UTF-8"));
        std::cout.imbue(std::locale("C"));
    }
};

int main(){

    Produto meuObj;
    meuObj.coletarInfo();
    meuObj.exibirInfo();

    return 0;
}
    