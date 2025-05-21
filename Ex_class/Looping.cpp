#include "Looping.h"
#include <iostream>

void Looping::tabuada(){
    std::cout<<"Digite um número para a tabuada: "<<std::endl;
    std::cin>>num;

    for(int i = 0; i <= 10; i++){
        num * i;
        std::cout<<num<<" x "<<i<<" = "<<num*i<<std::endl;
    }
}