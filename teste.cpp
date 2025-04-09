#include<iostream>


int main(){

    std::string palavras[5] = {"casa", "papel", "chuva", "teclado", "mouse"};
    std::string nome = "Eduardo";

    for(int i = 0; i <=4; i++){
        std::cout<<palavras[i].append(" - ").append(nome)<<std::endl;

    }


    return 0;
}