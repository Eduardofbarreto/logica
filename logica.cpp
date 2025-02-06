#include<iostream>

int main(){
    
int base, altura;
float area;

std::cout<<"Digite a altura: "<<std::endl;
std::cin>>altura;

std::cout<<"Digite a base: "<<std::endl;
std::cin>>base;

area = (base * altura)/2;

std::cout<<"A area do triangulo e de: "<<area<<std::endl;


return 0;

}