#include<iostream>
#include<string>

class Calculo{
    public:
    int num1, num2, soma;

    Calculo(){}
   
    void ColetarDados(){
        std::cout<<"Digite um valor para num1: "<<std::endl;
        std::cin>>num1;

        std::cout<<"Digite um valor para num2: "<<std::endl;
        std::cin>>num2;
    }


    void Resolver(){
        soma = num1 + num2;
        std::cout<<"O resultado é: "<<soma<<std::endl;
    }
};

int main(){

    Calculo meuObj;
    meuObj.ColetarDados();
    meuObj.Resolver();

    return 0;
}