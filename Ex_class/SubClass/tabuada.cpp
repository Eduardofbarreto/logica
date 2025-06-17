#include "tabuada.h"

void Tabuada::coletar(){
    std::cout<<"Digite um número para multiplicar pelos outros: "<<std::endl;
    std::cin>>num;
}

void Tabuada::resolver(){
    for(int i = 0; i < 10; i++){
        resultado = num * numeros[i];
        std::cout<<"O resultado de "<<num<<" x "<<numeros[i]<<" = "<<resultado<<std::endl;
    }
}