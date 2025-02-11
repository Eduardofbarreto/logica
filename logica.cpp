#include <iostream>
#include <string>

class carro{
    public:
    int peso;
    std::string nome;

    void acelerar(){
        std::cout<<"O carro "<<nome<<" "<<" corre bastante porque e leve."<<std::endl;
        std::cout<<"Seu peso e de "<<peso<<"."<<std::endl;
    }
};

class bike{
    public:
    int peso;
    std::string nome;
    
    void pedalar(){
        std::cout<<"A bike "<<nome<<" anda devagar, porem empina facil."<<std::endl;
        std::cout<<"Pesando apenas "<<peso<<"."<<std::endl;
    }
};

class moto{
    public:
    int peso;
    std::string nome;

    void correr(){
        std::cout<<"A moto "<<nome<<" corre bastante!"<<std::endl;
        std::cout<<"Alem de tudo, e leve."<<peso<<" kg!"<<std::endl;
    }
};

int main(){

carro meucarro;
bike minhabike;
moto minhamoto;

    std::cout<<"Qual nome do veiculo: "<<std::endl;
    std::cin>>meucarro.nome;

    std::cout<<"Qual peso do carro: "<<std::endl;
    std::cin>>meucarro.peso;

    /*
    std::cout<<"Qual nome da bike: "<<std::endl;
    std::cin>>minhabike.nome;

    std::cout<<"Qual nome da moto: "<<std::endl;
    std::cin>>minhamoto.nome;
    */

    meucarro.acelerar();
    //minhabike.pedalar();
    //minhamoto.correr();

}