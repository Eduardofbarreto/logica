#include<iostream>
#include<string>
#include<iomanip>
#include<locale>

class Cadastro{
    public:
        std::string nome;
        std::string senha;
        // std::string nascimento;

    Cadastro(){}

    virtual void logar(){
        std::cout<<"Digite seu nome: "<<std::endl;
        std::cin>>nome;
        std::cout<<"Digite sua senha: "<<std::endl;
        std::cin>>senha;
        std::cout<<std::endl;
    }

    virtual void boasVindas(){
        std::cout<<"Cadastro realizado com sucesso!"<<std::endl;
        std::cout<<"Seja bem-vindo "<<nome<<std::endl;
        std::cout<<std::endl;
    }

    virtual void login(){
        std::cout<<"Que bom que você voltou "<<nome<<"!"<<std::endl;
        std::cout<<std::endl;
    }

};

class Vender : public Cadastro{
    public:
        std::string produto;
        double valor;
        int quantidade;
        double total;

    Vender(){}

    virtual void mercadoria(){
        std::cout<<"Nome do produto: "<<std::endl;
        std::cin>>produto;
        std::cout<<"Valor do produto: "<<std::endl;
        std::cin>>valor;
        std::cout<<"Quantidade do produto: "<<std::endl;
        std::cin>>quantidade;
    }

    virtual void calcular(){
        if(quantidade >=2){
            total = quantidade * valor;
            std::cout<<"O valor foi de: R$ "<<std::fixed<<
                std::setprecision(2)<<total<<std::endl;
        }else{
            total = valor;
            std::cout<<"O valor foi de: R$ "<<std::fixed<<
                std::setprecision(2)<<total<<std::endl;
        };
    }

    virtual void concluir(){
        std::cout<<"Parabéns "<<nome<<"!"<<std::endl;
        std::cout<<"Seu(ua) "<<produto<<" foi vendido com sucesso!"<<std::endl;
        calcular();
        std::cout<<std::endl;
    }

};

int main(){

    int opcaoEntrada;

    Vender minhaVenda;

    std::cout<<"Você já é cliente? "<<std::endl;
    std::cout<<"1 - SIM"<<std::endl;
    std::cout<<"2 - NÃO"<<std::endl;
    std::cin>>opcaoEntrada;

    if(opcaoEntrada == 1){
        minhaVenda.logar();
        minhaVenda.login();
    }else{
        minhaVenda.logar();
        minhaVenda.boasVindas();
    }

    minhaVenda.mercadoria();
    minhaVenda.calcular();
    minhaVenda.concluir();
 
    return 0;
}