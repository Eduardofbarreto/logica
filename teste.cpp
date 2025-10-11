#include<iostream>
#include<string>

int main(){

    int idade;

    std::cout<<"Digite a sua idade: "<<std::endl;
    std::cin>>idade;

    if(idade <= 13){
        std::cout<<"Conteúdo infantil!"<<std::endl;
    }else if(idade <= 17){
        std::cout<<"Conteúdo Teen!"<<std::endl;
    }else{
        std::cout<<"Conteúdo Adulto!"<<std::endl;
    }

    return 0;
}