#include "Dowhile.h"
#include <iostream>

void Dowhile::execute(){
    
    do{
        std::cout<<"Digite um número até acertar: "<<std::endl;
        std::cin>>num;

        if(num != 6){
            std::cout<<"Número incorreto! Digite até acertar!"<<std::endl;
        }
    }while(num !=6);
    std::cout<<"Parabéns, você acertou!"<<std::endl;
}