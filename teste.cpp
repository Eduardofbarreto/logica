#include <iostream>
#include <string>

struct Calculo{
    int num1, num2;
    int resultado = num1 + num2;
};

int main(){
Calculo meuCalculo;

std::cout<<"Digite um valor para num1: "<<std::endl;
std::cin>>meuCalculo.num1;

std::cout<<"Digite um valor para num2: "<<std::endl;
std::cin>>meuCalculo.num2;

std::cout<<"O resultado e: "<<meuCalculo.resultado<<std::endl;


return 0;
}