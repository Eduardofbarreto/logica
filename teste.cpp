#include<iostream>
#include<string>

class Veiculo{
    public:
    std::string marca = "Ford";
    void barulho(){
        std::cout<<"Tuu Tuuu"<<std::endl;
    }
};

class Carro : public Veiculo{
    public:
    std::string modelo = "Mustang";
};

class Carro1 : public Veiculo{
    public:
    std::string modelo = "Ranger";
};

int main(){

    Carro meuCarro;
    Carro1 meuCarro1;

    meuCarro.barulho();
    std::cout<<meuCarro.marca + " " + meuCarro.modelo<<std::endl;

    meuCarro1.barulho();
    std::cout<<meuCarro1.marca + " " + meuCarro1.modelo<<std::endl;

    return 0;
}