#include <iostream>
#include <string>
#include<iomanip>
#include<locale>

class Imovel{
    public:
        double largura;
        double comprimento;
        double area;
        const double vMetro = 16000;
        double valorImovel;
    
    Imovel(){}

    void calculo(){
        area = largura * comprimento;
    }

    virtual void calcValor(){
        valorImovel = vMetro * area;
        std::cout<<"O valor do imóvel é de: R$ "<<
            std::fixed<<std::setprecision(2)<<valorImovel<<std::endl;
        std::cout<<std::endl;
    }

    virtual void coleta(){
        std::cout<<"Qual a largura do imóvel: "<<std::endl;
        std::cin>>largura;
        std::cout<<"Qual o comprimento do imóvel: "<<std::endl;
        std::cin>>comprimento;
        std::cout<<std::endl;
    }

    virtual void informacoes(){
        std::cout<<"O imóvel tem "<<largura<<"metros de largura."<<std::endl;
        std::cout<<"O imóvel tem "<<comprimento<<"metros de comprimento."<<std::endl;
        std::cout<<"O imóvel possui "<<area<<" metros quadrados."<<std::endl;
        std::cout<<std::endl;
    }
};

class Casa : public Imovel{
    public:
    int quartos;
    int banheiros;

    Casa(){}

    void coleta() override{
        Imovel::coleta();
        std::cout<<"Quantos quartos possui o imóvel: "<<std::endl;
        std::cin>>quartos;
        std::cout<<"Quantos banheiros possui o imóvel: "<<std::endl;
        std::cin>>banheiros;
    }

    void informacoes() override{
        Imovel::informacoes();
        std::cout<<"O imóvel possui "<<quartos<<" quarto(s)."<<std::endl;
        std::cout<<"O imóvel possui "<<banheiros<<" banheiro(s)."<<std::endl;
        Imovel::calcValor();
    }
};

int main(){

    Casa minhaCasa;
    minhaCasa.coleta();
    minhaCasa.informacoes();

    return 0;
}