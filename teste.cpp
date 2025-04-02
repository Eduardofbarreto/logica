#include <iostream>
#include <string>

class Animal{
    public:
    std::string nome;

    Animal(){}

    virtual void exibirNome(){
        std::cout<<"Animal"<<std::endl;
    }

    virtual void fazerSom(){
        std::cout<<"Som generico"<<std::endl;
    }
};

class Cachorro : public Animal{
    public:

    Cachorro(){}

    void exibirNome() override{
        std::cout<<"Rex"<<std::endl;
    }

    void fazerSom() override{
        std::cout<<"au au"<<std::endl;
    }
};

class Gato : public Animal{
    public:

    Gato(){}

    void exibirNome() override{
        std::cout<<"Perebas"<<std::endl;
    }

    void fazerSom() override{
        std::cout<<"Miauuu"<<std::endl;
    }
};

int main(){

    Animal animal1;
    Cachorro cachorro1;
    Gato gato1;

    animal1.exibirNome();
    animal1.fazerSom();

    cachorro1.exibirNome();
    cachorro1.fazerSom();

    gato1.exibirNome();
    gato1.fazerSom();


    return 0;
}