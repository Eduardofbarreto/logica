#include<iostream>
#include<string>

int main(){

    std::string palavras[5] = {"computador", "mouse", "teclado", "placa mãe", "chipset"};

    for(std::string palavra : palavras){
        std::cout<<palavra<<std::endl;
    }

    return 0;
}