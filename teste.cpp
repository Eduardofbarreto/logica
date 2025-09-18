#include<iostream>

int main(){

    float dolar, euro, real, total_euro, total_dolar;

    dolar = 5.30;
    euro = 6.25;

    std::cout<<"Digite o valor em Reais: "<<std::endl;
    std::cin>>real;

    total_dolar = real / dolar;
    total_euro = real / euro;

    std::cout<<"Você tem $"<<total_dolar<<std::endl;
    std::cout<<"Você tem ¢"<<total_euro<<std::endl;


    return 0;
}