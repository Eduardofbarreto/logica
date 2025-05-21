#include "While.h"
#include<iostream>

void While::fazerLoop(){
    std::cout<<"Digite um valor para i: "<<std::endl;
    std::cin>>i;

    while(i <= 100){
        std::cout<<i<<std::endl;
        i++;
    }
}