#include<iostream>
#include<string>
#include<iomanip>
#include<locale>

class Calculo{
    public:
    int a, b, soma;

    Calculo(int num1, int num2) :
        a(num1), b(num2), soma(0){}

    void pedirDados(){
        std::cout<<"Digite um valor para a: "<<std::endl;
        std::cin>>a;
        std::cout<<"Diite um valor para b: "<<std::endl;
        std::cin>>b;
    }

    void resolver(){
        soma = a + b;
        std::cout<<"O resultado é: "<<soma<<std::endl;
        std::cout<<std::endl;
    }
};

int main(){

    Calculo meuObj(0,0);
    meuObj.pedirDados();
    meuObj.resolver();

}