#include<iostream>

int main(){

    int tab, resul;

    std::cout<<"Digite um número para a tabuada: "<<std::endl;
    std::cin>>tab;

    for(int i = 0; i <= 10; i++){
        resul = tab * i;
        std::cout<<"O resultado de "<<tab<<" x "<<i<<" = "<<resul<<std::endl;
    }

    return 0;
}