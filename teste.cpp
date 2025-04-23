#include <iostream>
#include<string>

void minhaFuncao(std::string nomes){
    std::cout<<nomes<<std::endl;
}

int main(){

    minhaFuncao("Eduardo");
    minhaFuncao("Casa");
    minhaFuncao("teste");
    minhaFuncao("Olaaaaaaa!!");

    return 0;
}