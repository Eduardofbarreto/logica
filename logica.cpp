#include<iostream>

int main(){
    
int nota1, nota2, nota3, soma;
float media, n1, n2, n3;

std::cout<<"Digite a primeira nota: "<<std::endl;
std::cin>>nota1;

n1 = nota1 * 0.20;

std::cout<<"Digite a segunda nota: "<<std::endl;
std::cin>>nota2;

n2 = nota2 * 0.35;

std::cout<<"Digite a terceira nota: "<<std::endl;
std::cin>>nota3;

n3 = nota3 * 0.45;

media = (n1 + n2 + n3)/3;
soma = n1 + n2 + n3;

std::cout<<"\n"<<std::endl;
std::cout<<"Parcial 1: "<<n1<<std::endl;
std::cout<<"Parcial 2: "<<n2<<std::endl;
std::cout<<"Parcial 3: "<<n3<<std::endl;
std::cout<<"A soma das parciais e de: "<<soma<<std::endl;
std::cout<<"A media das parciais e de: "<<media<<std::endl;

return 0;

}