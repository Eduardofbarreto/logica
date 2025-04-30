#include <iostream>
#include <string>
#include<iomanip>
#include<locale>

class Produto{
    public:
    std::string nome;
    std::string tipo;
    double valor;

    Produto(std::string n, std::string t, double v){
        nome = n;
        tipo = t;
        valor = v;
    }
};

int main(){

    std::string pNome;
    std::string pTipo;
    double pValor;

    std::cout<<"Digite o nome do produto: "<<std::endl;
    std::getline(std::cin, pNome);

    std::cout<<"Digite o tipo do produto: "<<std::endl;
    std::cin>>pTipo;

    std::cout<<"Digite o valor do produto: "<<std::endl;
    std::cin>>pValor;

    Produto meuProduto(pNome, pTipo, pValor);

    std::cout<<"\nInformações de cadastro: "<<std::endl;
    std::cout<<"Nome do produto: "<<meuProduto.nome<<std::endl;
    std::cout<<"Tipo de produto: "<<meuProduto.tipo<<std::endl;
    std::cout<<"Valor do produto: R$ "<<std::fixed<<std::setprecision(2)<<meuProduto.valor<<std::endl;
    std::cout.imbue(std::locale("pt_BR.UTF-8"));
    std::cout.imbue(std::locale("C"));
    std::cout<<"\n"<<std::endl;

    return 0;
}
