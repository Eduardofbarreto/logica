#include <iostream>
#include<string>

class Carro{
    public:
    std::string nome;
    std::string cor;

    Carro(){}

    void Acelerar(){
        std::cout<<"O "<<nome<<" "<<cor<<" esta andando a 40km/h."<<std::endl;
    }

    void Frear(){
        std::cout<<"O "<<nome<<" "<<cor<<" esta parando."<<std::endl;
    }
};

int main(){

    int op;

    Carro meuCarro;

    std::cout<<"Digite o nome do carro: "<<std::endl;
    std::cin>>meuCarro.nome;

    std::cout<<"Digite a cor do carro: "<<std::endl;
    std::cin>>meuCarro.cor;

    std::cout<<"Digite 1 ou 2: "<<std::endl;
    std::cin>>op;

    if(op == 1){
        meuCarro.Acelerar();
    }else{
        meuCarro.Frear();
    }


    return 0;
}