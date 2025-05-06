#include <iostream>
#include <string>

class Indice{
    public:
    int num[3] = {1,2,3};
    int numbers[5] = {10, 20, 30, 40, 50};
    int numA, numbersA;

    Indice(){}

    void coletarDados(){
        std::cout<<"Digite um valor para num: "<<std::endl;
        std::cin>>numA;
        std::cout<<"Digite um valor para numbers: "<<std::endl;
        std::cin>>numbersA;
    }

    void exibirDados(){
        std::cout<<num[numA]<<std::endl;
        std::cout<<numbers[numbersA]<<std::endl;
    }
};

int main(){

    Indice meuObj;
    meuObj.coletarDados();
    meuObj.exibirDados();

    return 0;
}