#include<iostream>

int main(){

    float peso, altura, imc;

    std::cout<<"Digite o seu peso: "<<std::endl;
    std::cin>>peso;

    std::cout<<"Digite sua altura: "<<std::endl;
    std::cin>>altura;

    imc = (peso/(altura*altura));

    if(imc>30){
        std::cout<<"Obesidade Grau I"<<std::endl;
    }else if(imc > 25){
        std::cout<<"Sobrepeso"<<std::endl;
    }else if(imc > 18.5){
        std::cout<<"Peso normal"<<std::endl;
    }else{
        std::cout<<"Magreza!"<<std::endl;
    }

    return 0;
}