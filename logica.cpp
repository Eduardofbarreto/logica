#include <iostream>
#include <string>

class soma{
    public:
    int a, b, resultado;

    void somar(){
        resultado = a + b;
        std::cout<<"O resultado da soma e: "<<resultado<<std::endl;
    }
};

class saudacao{
    public:
    std::string nome;

    void apresentacao(){
        std::cout<<"Bem-vindo "<<nome<<" ao nosso servico Premium!";
    }
};

int main(){

    soma operacao;
    saudacao mensagem;

    std::cout<<"Digite um valor para a: "<<std::endl;
    std::cin>>operacao.a;

    std::cout<<"Digite um valor para b: "<<std::endl;
    std::cin>>operacao.b;

    std::cout<<"Digite seu nome: "<<std::endl;
    std::cin>>mensagem.nome;

    operacao.somar();
    mensagem.apresentacao();
    
    return 0;
}