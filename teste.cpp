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

    Carro(std::string m, std::string mod, int a, double v):
        marca(m), modelo(mod), ano(a), valor(v){}
};

int main(){

    std::string cMarca;
    std::string cModelo;
    int cAno;
    double cValor;

    std::cout<<"Digite a marca do veículo: "<<std::endl;
    std::cin>>cMarca;

    std::cout<<"Digite o modelo do veículo: "<<std::endl;
    std::cin>>cModelo;

    std::cout<<"Digite o ano do veículo: "<<std::endl;
    std::cin>>cAno;

    std::cout<<"Digite o valor do veículo: "<<std::endl;
    std::cin>>cValor;

    Carro(cMarca, cModelo, cAno, cValor);

    std::cout<<"\nInformações sobre o veículo: "<<std::endl;
    std::cout<<"Marca: "<<cMarca<<std::endl;
    std::cout<<"Modelo: "<<cModelo<<std::endl;
    std::cout<<"Ano: "<<cAno<<std::endl;
    std::cout<<"Valor: R$"<<std::fixed<<std::setprecision(2)<<cValor<<std::endl;
    std::cout.imbue(std::locale("pt_BR.UTF-8"));
    std::cout.imbue(std::locale("C"));
    std::cout<<"\n"<<std::endl;

    return 0;
}
