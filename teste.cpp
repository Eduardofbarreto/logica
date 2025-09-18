#include<iostream>

int main(){

    int num;

    std::cout<<"Digite um número para saber se é par ou ímpar: "<<std::endl;
    std::cin>>num;

    if(num % 2 == 0){
        std::cout<<num<<" é par!"<<std::endl;
    }else{
        std::cout<<num<<" é ímpar!"<<std::endl;
    }

    return 0;
}