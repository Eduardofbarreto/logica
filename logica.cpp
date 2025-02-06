#include<iostream>

int main(){
    
int num1, num2, num3;
float media;

std::cout<<"Digite o primeiro numero: "<<std::endl;
std::cin>>num1;

std::cout<<"Digite o segundo numero: "<<std::endl;
std::cin>>num2;

std::cout<<"Digite o terceiro numero: "<<std::endl;
std::cin>>num3;

media = (num1 + num2 + num3)/3;

std::cout<<"O resultado da média é: "<<media<<std::endl;


return 0;

}