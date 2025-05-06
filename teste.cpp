#include <iostream>
#include <string>
#include<iomanip>
#include<locale>

class Produtos{
    public:
    int qtd;
    double valor, resultado;

    Produtos(){}

    void Calcular(){
        resultado = qtd * valor;
        std::cout<<"O resultado é: R$"<<resultado<<std::fixed<<std::setprecision(2)<<std::endl;
        std::cout.imbue(std::locale("pt_BR.UTF-8"));
        std::cout.imbue(std::locale("C"));
    }
};

int main(){

    Produtos meuObj;
    meuObj.qtd = 6;
    meuObj.valor = 9.99;

    meuObj.Calcular();

    return 0;
}