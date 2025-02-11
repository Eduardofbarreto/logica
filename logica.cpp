#include <iostream>
#include <string>

class mercado{
    public:
    std::string produto1;
    std::string produto2;
    std::string produto3;

    double preco1;
    double preco2;
    double preco3;

    double somas(){
        double resultado = (preco1 + preco2 + preco3);
        std::cout<<"Voce comprou: "<<produto1<<", "<<produto2<<" e "<<produto3<<std::endl;
        std::cout<<"Gastando um total de: "<<resultado<<std::endl;
        return resultado;
        
    }
};

int main(){

    mercado mercado;

    std::cout<<"Digite o produto 1: "<<std::endl;
    std::cin>>mercado.produto1;

    std::cout<<"Digite o valor do produto 1: "<<std::endl;
    std::cin>>mercado.preco1;

    std::cout<<"Digite o produto 2: "<<std::endl;
    std::cin>>mercado.produto2;

    std::cout<<"Digite o valor do produto 2: "<<std::endl;
    std::cin>>mercado.preco2;

    std::cout<<"Digite o produto 3: "<<std::endl;
    std::cin>>mercado.produto3;

    std::cout<<"Digite o valor do produto 3: "<<std::endl;
    std::cin>>mercado.preco3;

    std::cout<<mercado.somas();
    
    return 0;
}