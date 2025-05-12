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

int main(){

    Carro meuCarro;
    meuCarro.barulho();
    std::cout<<meuCarro.modelo + " " + meuCarro.modelo;

    return 0;
}