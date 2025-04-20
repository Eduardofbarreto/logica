#include <iostream>
#include <string>

class Calculo{
    public:
    int num1, num2, soma;

    Calculo(){}

    virtual void Resolver(){
        soma = num1 + num2;
        std::cout<<soma<<std::endl;
    }
};

int main(){

    Calculo meuCalculo1;
    Calculo meuCalculo2;

    meuCalculo1.num1 = 12;
    meuCalculo1.num2 = 4;

    meuCalculo2.num1 = 123;
    meuCalculo2.num2 = 38;


    meuCalculo1.Resolver();
    meuCalculo2.Resolver();


return 0;
}