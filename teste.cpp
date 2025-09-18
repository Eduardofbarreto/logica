#include<iostream>

int main(){

    int num1, num2, soma, subt, mult;
    float div;

    std::cout<<"Digite um valor para num1: "<<std::endl;
    std::cin>>num1;

    std::cout<<"Digite um valor para num2: "<<std::endl;
    std::cin>>num2;

    soma = num1 + num2;
    subt = num1 - num2;
    mult = num1 * num2;
 

    std::cout<<"O resultado da soma é: "<<soma<<std::endl;
    std::cout<<"O resultado da subtração é: "<<subt<<std::endl;
    std::cout<<"O resultado da multiplicação é: "<<mult<<std::endl;
    if(num2>0){
        div = num1 / num2;
        std::cout<<"O resultado da divisão é: "<<div<<std::endl;
    }else{
        std::cout<<"Erro: Divisão por 0!"<<std::endl;
    }
}